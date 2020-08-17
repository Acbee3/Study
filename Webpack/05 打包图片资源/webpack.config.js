/*
 * @Author: your name
 * @Date: 2020-08-17 12:06:09
 * @LastEditTime: 2020-08-17 12:54:14
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Code/Webpack/05 打包图片资源/webpack.config.js
 */
const { resolve } = require('path');
const HtmlWebpackPlugin = require('html-webpack-plugin');

module.exports = {
    entry: './src/index.js',
    output: {
        filename: 'built.js',
        path: resolve(__dirname, 'build')
    },
    module: {
        rules: [
            {
                test: /\.less$/,
                // 使用多个 loader 用 []
                use: [
                    'style-loader',
                    'css-loader',
                    'less-loader'
                ]
            },
            {
                // 处理图片资源
                // 处理不了 html 的 img 图片（在图片被转为 base64 后，src找不到）
                test: /\.(jpg|png|gif)$/,
                loader: 'url-loader', // 只用到一个 loader，直接写即可  尽管还要用到 file-loader
                options: {
                    // 图片大小小于8kb，就会被base64处理
                    // 优点：减少请求数量（减轻服务器压力）
                    // 缺点：图片体积会增大（文件请求速度慢）
                    limit: 3 * 1024,
                    // 关闭es6模块化解析
                    esModule: false,
                    // 取 hash 前10位
                    // ext 原文件扩展名
                    name: '[hash:10].[ext]'
                }
            },
            {
                // 专门处理 html img 引入的图片，但与 html-webpack-plugin 冲突，在源码里用 <%= require()%> 去解决，就可以不用 html-loader 此时可能会有 [object Module] 问题，主要是因为es6模块化解析导致，关闭即可
                // test: /\.html$/,
                // loader: 'html-loader'
            }
        ]
    },
    plugins: [
        new HtmlWebpackPlugin({
            template: './src/index.html'
        })
    ],
    mode: 'production'
}

