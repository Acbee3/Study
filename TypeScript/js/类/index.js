"use strict";
/*
 * @Author: liuchao
 * @Date: 2020-08-13 00:06:05
 * @LastEditTime: 2020-08-13 00:23:19
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Code/TypeScript/类/index.ts
 */
var __extends = (this && this.__extends) || (function () {
    var extendStatics = function (d, b) {
        extendStatics = Object.setPrototypeOf ||
            ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
            function (d, b) { for (var p in b) if (b.hasOwnProperty(p)) d[p] = b[p]; };
        return extendStatics(d, b);
    };
    return function (d, b) {
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();
/**
 * 抽象类是依据其他类继承的基类
 * 抽象方法必须定义在抽象类中，
 * 并且父类定义的抽象方法不会调用（不包含具体的实现），而需要子类去调用，每一个子类的表现也不一样，
 * 且子类必须去调用
*/
var Animal = /** @class */ (function () {
    function Animal(name) {
        this.name = name;
    }
    return Animal;
}());
var Dog = /** @class */ (function (_super) {
    __extends(Dog, _super);
    function Dog(name) {
        return _super.call(this, name) || this;
    }
    Dog.prototype.eat = function () {
        console.log(this.name);
    };
    return Dog;
}(Animal));
