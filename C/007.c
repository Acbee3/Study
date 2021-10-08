/*
 * @Author: your name
 * @Date: 2021-09-27 22:52:34
 * @LastEditTime: 2021-10-07 17:13:33
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/007.c
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float f = 3e4;
    int i;
    char c;
    system("pause");
    printf("%f\n", f);
    scanf("%d", &i); // 会阻塞
    printf("i=%d\n", i);
    scanf("%c", &c); // 不会阻塞
    printf("c=%c\n", c);
    return 0;
}