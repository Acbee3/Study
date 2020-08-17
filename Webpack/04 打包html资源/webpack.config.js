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

        ]
    },
    plugins: [
        // html-webpack-plugin 
        // 默认会创建一个空的html文件，引入打包输出的所有资源（js/css）
        new HtmlWebpackPlugin({
            // 复制index.html文件，并引入打包输出的所有资源（js/css）
            template: './src/index.js'
        })
    ],
    mode: 'production'
}