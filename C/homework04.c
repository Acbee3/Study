/*
 * @Author: your name
 * @Date: 2021-12-08 23:47:20
 * @LastEditTime: 2021-12-08 23:55:57
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /C/homework04.c
 */
#include <stdio.h>

int main()
{
    int len, i, sum = 0;
    scanf("%d\n", &len);
    int a[len];
    for (i = 1; i <= len; i++)
    {
        scanf("%d", &a[i-1]);
        if(a[i-1] == 2) {
            sum++;
        };
    };
    printf("%d\n", sum);
    return 0;
}