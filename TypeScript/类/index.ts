/*
 * @Author: liuchao
 * @Date: 2020-08-13 00:06:05
 * @LastEditTime: 2020-08-13 00:23:19
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Code/TypeScript/类/index.ts
 */

/**
 * 抽象类是依据其他类继承的基类
 * 抽象方法必须定义在抽象类中，
 * 并且父类定义的抽象方法不会调用（不包含具体的实现），而需要子类去调用，每一个子类的表现也不一样，
 * 且子类必须去调用
*/
abstract class Animal { // 这只是定义一个标准，具体的实现还在派生类里
    public name:string;
    constructor(name:string) {
        this.name = name;
    }
    abstract eat():any;
}

class Dog extends Animal {
    constructor(name:any) {
        super(name);
    }
    eat() {
        console.log(this.name);        
    }
}