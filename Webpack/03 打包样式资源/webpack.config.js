/*
 * @Author: your name
 * @Date: 2020-08-16 13:10:14
 * @LastEditTime: 2020-08-17 01:48:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Code/Webpack/03 打包样式资源/webpack.config.js
 */

/* 
webpack 的配置文件 commonJS 的语法
所有的构建工具都是基于nodejs平台运行的
*/
// resolve 专门用来处理绝对路径的方法
const { resolve } = require('path');
module.exports = {
    // 入口起点
    entry: './src/index.js',
    // 输出
    output: {
        filename: 'built.js',
        // 输出路径
        // __dirname nodejs变量，代表当前文件的目录绝对路径
        path: resolve(__dirname, 'build'),
    },
    // loader 的配置
    module: {
        rules: [
            // 详细 loader 的配置
            // 匹配哪些文件
            // 下包时推荐在最外层，因为内部找不到会去外层找
            // 不同的文件配置不同的 loader
            {
                test: /\.css$/,
                // 使用哪些 loader 进行处理
                use: [ // 执行顺序：从右到左，从下到上
                    'style-loader',
                    'css-loader'
                ]
            },      
            {
                test: /\.less$/,
                use: [
                    'style-loader',
                    'css-loader',
                    'less-loader'
                ]
            }   
        ]
    },
    plugins: [
        // 详细 plugins 配置

    ],
    // 模式
    mode: 'production', // 开发模式
}
