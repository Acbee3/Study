/*
 * @Author: your name
 * @Date: 2021-10-08 15:50:14
 * @LastEditTime: 2021-10-08 15:56:14
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/010.c
 */
#include <stdio.h>

int main() 
{
    int i;
    char c;
    float f;
    // 混合输入时每次在 %c 之前需要加一个空格，%d与%f可以自动忽略空格
    scanf("%d %c%f", &i, &c, &f);
    printf("i=%d, c=%c, f=%f", i, c, f);
    return 0;
}