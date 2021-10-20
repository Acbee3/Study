/*
 * @Author: your name
 * @Date: 2021-10-21 00:03:25
 * @LastEditTime: 2021-10-21 00:10:44
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/014.c
 */
#include <stdio.h>

#define i 5;
int main()
{
    // int i = 5;
    // int a[i] // 不可以这样写 [] 必须是常量
    // 定义数组的一瞬间，数组占据的空间就确定下来了
    int a[i] = {1, 3, 5, 7, 9};
    return 0;
}