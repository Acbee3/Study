/*
 * @Author: your name
 * @Date: 2021-10-31 10:03:51
 * @LastEditTime: 2021-10-31 10:43:37
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/016.c
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j = 10;
    int a[5] = { 1, 2, 3, 4, 5 };
    int i = 3;
    a[5] = 20; // 访问越界
    printf("a[5]=%d\n", a[5]);
    printf("j = %d\n", j);
    system("pause");
    return 0;
}