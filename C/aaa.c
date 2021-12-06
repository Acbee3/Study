/*
 * @Author: your name
 * @Date: 2021-11-30 19:15:57
 * @LastEditTime: 2021-12-05 23:49:38
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /C/aaa.c
 */
#include <stdio.h>

int main()
{
    int a, b, n = 0;
    scanf("%d", &a);
    n = a;
    while (n)
    {
        b *= 10;
        b += n % 10;
        n /= 10;
    }

    if (a == b)
        printf("yes");
    else
        printf("no");

    return 0;
}