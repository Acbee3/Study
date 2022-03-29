import { Component, OnInit } from '@angular/core';
import { EventEmitter}  from 'events';
import { Observable, from, fromEvent, fromEventPattern, of, repeatWhen, interval, concat, combineLatestWith, combineLatest, withLatestFrom, timer, raceWith, race, forkJoin, takeUntil, reduce, mapTo } from 'rxjs';
import { map, throttle, audit, sample, distinct, distinctUntilChanged, single, bufferToggle, bufferWhen, buffer, take, concatMap, concatAll, mergeAll, zipAll, merge } from 'rxjs/operators';
import * as R from 'ramda';

@Component({
	selector: 'app-home',
	templateUrl: './home.component.html',
	styleUrls: ['./home.component.less'],
})
export class HomeComponent implements OnInit {
	eventEmitter = new EventEmitter();
	constructor() { }

	ngOnInit(): void {
		this.drag();
	}

	observable() {
		const subscribe = (sub: { next: (arg0: number) => void; complete: () => void; }) => {
			let i = 0;
			const time1 = setInterval(() => {
				// if(i >= 3) {
				// 	sub.complete();
				// };
				sub.next(++i);
			}, 1000);
			return {
				unsubscribe: () => { // complete/error 的时候会触发，也可以observer主动去调用（如果没有调用complete/error）
					clearInterval(time1);
					console.log("unsubscribe");
				}
			}
		}
		const source$ = new Observable(subscribe);
		const observer1 = {
			next: (x: any) => {
				console.log('observer1:', x);
			},
			complete: () => {
				console.log('observer1:', 'over');
			}
		};
		const observer2 = {
			next: (x: any) => {
				console.log('observer2:', x * 2);
			},
			complete: () => {
				console.log('observer2:', 'over');
			}
		};
		const subscription1 = source$.subscribe(observer1);
		const subscription2 = source$.subscribe(observer2);
		setTimeout(() => {
			subscription1.unsubscribe();
			subscription2.unsubscribe();
		}, 3500);
	}

	coldObserve() {
		const subscribe = () => {
			
		}
		const source$ = new Observable(subscribe);
	}

	hotObserver() {
		
	}

	map() {
		const subscribe = (sub: { next: (arg0: number) => void; }) => {
			sub.next(1);
			sub.next(2);
			sub.next(3);
		};
		const source$ = new Observable(subscribe);
		source$.pipe(map((x: number) => x * x)).subscribe(console.log);
	}

	promise() {
		const promise = Promise.reject('oops');
		const source$ = from(promise);
		source$.subscribe(
			console.log, 
			err => {
				console.log('catch', err);
				
			}, 
			() => {
				console.log('complete');
			}
		);
	}

	_fromEvent() {
		// let clickCount = 0;
		// const event$ = fromEvent(document.querySelector('.button') as HTMLElement, 'click');
		// event$.subscribe(() => {
		// 	(document.querySelector('#count') as HTMLElement).innerText = ++clickCount + '';
		// });
		const source$ = fromEvent(this.eventEmitter, 'hello');
		source$.subscribe(
			console.log,
			err => console.log('error:' + err),
			() => {
				console.log('complete');
			}
		);
	}

	_fromEventPartten() {
		const addHandler = (handler: (...args: any[]) => void) => {
			this.eventEmitter.addListener('do', handler); // handler 对应 observer的next
		};

		const removeHandler = (handler: (...args: any[]) => void) => {
			this.eventEmitter.removeListener('do', handler);
		}
		const source$ = fromEventPattern(addHandler, removeHandler); 
		const subscribtion = source$.subscribe(
			(x) => {
				console.log(x);
				subscribtion.unsubscribe();
			},
			err => console.error(err),
			() => console.log('complete')
		);
	}

	_combineLatest() {
		// withLatestFrom 与 combineLatest 的区别
		// 多重依赖会有glitch
		const original$ = timer(0, 1000);
		const source1$ = original$.pipe(map((x: string | number) => x + 'a'));
		const source2$ = original$.pipe(map((x: string | number) => x + 'b'));
		// const result$ = source1$.pipe(withLatestFrom(source2$));
		const result$ = source1$.pipe(combineLatestWith(source2$));
		result$.subscribe(console.log, null, () => console.log('complete'));
	}

	mouseClick() {
		const event$ = fromEvent(document.body, 'click');
		const x$ = event$.pipe(map((e: any) => e.x));
		const y$ = event$.pipe(map((e: any) => e.y));
		const result$ = x$.pipe(withLatestFrom(y$), map(([x, y]) => `x: ${x}, y: ${y}`));
		result$.subscribe((location) => {
			console.log('#render', location);
			(document.querySelector('#text') as HTMLElement).innerText = location;
		});
	}

	_race() { // 谁先产生数据，退订另一个
		const source1$ = timer(0, 2000).pipe(map((x) => x + 'a'));
		const source2$ = timer(500, 1000).pipe(map((x) => x + 'b'));
		const winner$ = race(source1$, source2$);
		// const winner$ = source1$.pipe(raceWith(source2$));
		winner$.subscribe(console.log, null, () => console.log('complete'));
	}

	_reduce() {
		// 在4s内点了多少下
		const clicksInFiveSeconds = fromEvent(document.body, 'click').pipe(
			takeUntil(interval(4000)),
		);
		const ones = clicksInFiveSeconds.pipe(mapTo(1));
		const seed = 0;
		const count = ones.pipe(reduce((acc, one) => acc + one, seed));
		count.subscribe(x => console.log(x));
	}

	_throttle() {
		const example$ = interval(1000);

		const throttleFlow$ = example$.pipe(throttle((val) => {
			console.log("this is val: " + val);
			return timer(val * 100);
		}));

		throttleFlow$.subscribe(
			console.log,
			err => console.log(err),
			() => console.log('complete')
		);
	}

	_sample() {
		const sourse$ = interval(500);
		const notifier$ = fromEvent(document.body, 'click');
		sourse$.pipe(sample(notifier$)).subscribe(val => console.log(`sample: ${val}`));
	}

	_audit() {
		// const source$ = interval(1000);
		const source$ = fromEvent(document.body, 'click');
		const durationSelector = () => {
			// return fromEvent(document.body, 'click')
			return interval(2000);
		};
		source$.pipe(audit(durationSelector)).subscribe((val: any) => console.log(val.offsetX));
	}

	_distinct() {
		const source$ = interval(100);
		const distinct$ = source$.pipe(distinct(val => val, interval(5000)));
		distinct$.subscribe(console.log);
	}

	_distinctUntilChanged() {
		const source$ = of(
			{ name: 'RxJS', version: 'v4' },
			{ name: 'React', version: 'v15' },
			{ name: 'React', version: 'v16' },
			{ name: 'RxJS', version: 'v5' }
    	);
		source$.pipe(distinctUntilChanged((a, b) => a.name === b.name)).subscribe(console.log)
	}

	_single() {
		const source$ = interval(1000);
		source$.pipe(single(x => x % 2 === 0)).subscribe(console.log, err => console.error(err));
	}

	_map() {
		const source$ = of(3, 1, 4);
		const context = {
			separator: ':'
		};
		source$.pipe(map(function(value: any, index: any) { // 此处不能用箭头函数，箭头函数的this会绑定当前定义环境
			return `${value} ${this.separator} ${index}`
		}, context)).subscribe(console.log); // 尽量避免使用第二个参数
	}

	_bufferToggle() {
		const source$ = interval(500);
		source$.pipe(bufferToggle(fromEvent(document.body, 'mousedown'), () => fromEvent(document.body, 'mouseup'))).subscribe(console.log);
	}

	_bufferWhen() { // 和sample对比
		const source$ = interval(500);
		source$.pipe(bufferWhen(() => fromEvent(document.body, 'mousedown'))).subscribe(console.log);
	}

	_buffer() { // 上一个的结束 下一个的开始
		const source$ = interval(500);
		const notifier$ = fromEvent(document.body, 'click'); 
		source$.pipe(buffer(notifier$)).subscribe(console.log);
	}

	_highMap() {
		const source$ = interval(1000).pipe(take(5));
		source$.pipe(map((val, index) => {
			return interval(500).pipe(take(5));
		}), mergeAll()).subscribe(console.log);
	}

	_concatMap() {
		const source$ = interval(200).pipe(take(5));
		source$.pipe(concatMap(() => interval(500).pipe(take(5)))).subscribe(console.log);
	}

	drag() {
		const div = document.querySelector('#box') as HTMLElement;
		const mouseDown$ = fromEvent(div, 'mousedown');
		const mouseUp$ = fromEvent(div, 'mouseup');
		const mouseMove$ = fromEvent(div, 'mousemove');
		const mouseOut$ = fromEvent(div, 'mouseout');

		const drag$ = mouseDown$.pipe(concatMap((startEvent: any) => {
			const initLeft = div.offsetLeft;
			const initTop = div.offsetTop;
			const stop$ = mouseUp$.pipe(merge(mouseOut$));

			return mouseMove$.pipe(map((moveEvent: any) => {
				return {
					x: moveEvent.x - startEvent.x + initLeft,
					y: moveEvent.y - startEvent.y + initTop,
				}
			}))
		})).subscribe((val) => {
			console.log(val);
			div.style.left = val.x + 'px';
			div.style.left = val.y + 'px';
		})
	}


}

