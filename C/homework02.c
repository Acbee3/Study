/*
 * @Author: your name
 * @Date: 2021-12-06 23:23:31
 * @LastEditTime: 2021-12-06 23:28:07
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /C/homework02.c
 */
#include <stdio.h>

int main()
{
    int n, i, product;
    product = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("%d\n", product);
    return 0;
}
