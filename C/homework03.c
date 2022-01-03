/*
 * @Author: your name
 * @Date: 2021-12-07 22:49:27
 * @LastEditTime: 2021-12-07 22:53:33
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /C/homework03.c
 */
#include <stdio.h>

int main()
{
    int i, j, k, l, sum = 0;
    for (i = 1; i <= 40; i++)
    {
        for (j = 1; j <= 40; j++)
        {
            for (k = 1; k <= 40; k++)
            {
                for(l = 1; l <= 40; l++)
                {
                    if(i + j + k + l == 40 && 10 * i + 5 * j + 2 * k + l == 100)
                    {
                        sum++;
                    }
                }
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}