/*
 * @Author: your name
 * @Date: 2021-04-20 11:26:57
 * @LastEditTime: 2021-04-20 12:05:00
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/002.c
 */
#include <stdio.h>

int main()
{
    printf("打印五个字符：%c %c %c %c %c\n", 70, 105, 115, 104, 67);
    printf("前边用 填充：%8d\n", 2015);
    printf("前边用0填充：%08d\n", 2015);
    printf("右对齐，保留2位：%-8.2f\n", 3.1415926);
    printf("int长度：%d\n", sizeof(128));

}