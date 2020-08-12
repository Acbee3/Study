/*
 * @Author: liuchao
 * @Date: 2020-08-13 00:23:59
 * @LastEditTime: 2020-08-13 00:46:50
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Code/TypeScript/接口/index.ts
 */
/**
 * 接口是一种规范的定义，规范行为和动作，规定了某一批类要遵守的规范
*/

// 1. 属性接口  对 json 的约束
// function printLabel(obj: {label:string}):void {
//     console.log(obj.label);
    
// }
// printLabel({label: '124'});

// interface 去定义接口
// interface Name {
//     firstName: string;
//     lastName: string;
// }

// function printName(name: Name):void {
//     console.log(name.firstName + '.' + name.lastName);
    
// }

// // printName({firstName: 'Chao', lastName: 'Liu'});
// let obj = { // 推荐这样写，包含 firstName lastName 即可
//     age: 16,
//     firstName: 'Chao',
//     lastName: 'Liu'
// }
// printName(obj);

// 2. 可选属性接口 在后面加 ?
interface Name {
    firstName: string;
    lastName?: string;
}
function getName(name: Name) {
    
}
