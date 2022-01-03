/*
 * @Author: your name
 * @Date: 2021-12-15 00:10:41
 * @LastEditTime: 2021-12-16 00:26:51
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /C/021.c
 */

#include <stdio.h>

int main()
{
    int i = 10;
    int j = 5;
    int *p;
    p = &i;
    printf("%d\n", sizeof(p)); // 如果为64位系统，打印出8
    printf("i=%d\n", i); // 直接访问
    printf("*p=%d\n", &p); // 间接访问
    return 0;
}