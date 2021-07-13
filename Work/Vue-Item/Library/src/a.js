/*
 * @Author: your name
 * @Date: 2021-03-29 19:45:20
 * @LastEditTime: 2021-03-29 20:12:48
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Work/Vue-Item/Library/src/a.js
 */

let arr = [2, 34, 45, 33, 34, 67];

function returnValue(arr, target) {
    let index1 = arr.indexOf(target);
    let index2 = arr.lastIndexOf(target);
    if(index1 === index2) {
        return `index: ${index1}`;
    } else {
        return `index1: ${index1}, index2: ${index2}`
    }
}