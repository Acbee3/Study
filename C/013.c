/*
 * @Author: your name
 * @Date: 2021-10-20 00:13:00
 * @LastEditTime: 2021-10-20 00:15:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/013.c
 */

#include <stdio.h>

int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        while (a)
        {
            printf("%d", a % 10);
            a = a / 10;
        }
    }
    return 0;
}