/*
 * @Author: your name
 * @Date: 2022-01-10 23:56:27
 * @LastEditTime: 2022-01-11 00:55:55
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /C/027.c
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *p = "hello";
    char c[10] = "hello"; // 等价于strcpy(c, "hello")
    c[0] = 'H';
    // p[0] = 'H'; // 不可以对常量区进行修改
    printf("c=%s\n", c);
    printf("p=%s\n", p);
    return 0;
}