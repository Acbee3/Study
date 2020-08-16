/*
 * @Author: your name
 * @Date: 2020-08-16 12:26:27
 * @LastEditTime: 2020-08-16 13:02:54
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Code/Webpack/02 初体验/src/index.js
 */
/* 
    webpack 入口起点文件
    1. 运行指令
        开发环境：webpack ./src/index.js -o ./build/build.js --mode=development
        生产环境：webpack ./src/index.js -o ./build/build.js --mode=production
    2. 结论
        只能识别 js/json 不能识别 css/img 文件
        生产环境和开发环境将 ES6 编译为浏览器可以识别的模块
        生产环境比开发环境多了一个压缩步骤
*/
import data from './data.json';
import './index.css';
function add(x, y) {
    return x + y;
}