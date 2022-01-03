/*
 * @Author: your name
 * @Date: 2021-12-13 23:23:13
 * @LastEditTime: 2021-12-14 00:01:06
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /C/homework06.c
 */

#include <stdio.h>

int i;


int main()
{
    scanf("%d", &i);
    change(i);
    return 0;
}

void change(int num)
{
    printf("%d\n", num / 2);
}


