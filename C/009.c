/*
 * @Author: your name
 * @Date: 2021-10-08 15:34:24
 * @LastEditTime: 2021-10-08 15:37:32
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/009.c
 */
#include <stdio.h>

int main()
{
    char i;
    while(scanf("%c", &i) != EOF)
    {
        if(i != '\n') {
            printf("%c", i - 32);
        } else {
            printf("\n");
        }
    }
}