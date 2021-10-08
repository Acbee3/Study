/*
 * @Author: your name
 * @Date: 2021-10-08 14:58:26
 * @LastEditTime: 2021-10-08 15:24:23
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/008.c
 */
#include <stdio.h>

// 缓冲区
int main()
{
    int i, ref;
    // rewind(stdin)(vs2013-vs2019用) / fflush(stdin) 清空缓冲区
    while(fflush(stdin), (ref = scanf("%d", &i)) != EOF) 
    {
        printf("i=%d\n", i);
    }
    return 0;
}