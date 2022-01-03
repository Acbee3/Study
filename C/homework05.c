/*
 * @Author: your name
 * @Date: 2021-12-09 23:21:09
 * @LastEditTime: 2021-12-09 23:27:40
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /C/homework05.c
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    char b[20];
    int len;
    gets(a);
    len = strlen(a);
    for(int i = 0; i < len; i++)
    {
        b[i] = a[len - i - 1];
    }

    if(strcmp(a, b) > 0)
    {
        printf("%d\n", 1);
    }
    else if(strcmp(a, b) < 0)
    {
        printf("%d\n", -1);
    }
    else
    {
        printf("%d\n", 0);
    }
    return 0;
}