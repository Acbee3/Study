/*
 * @Author: your name
 * @Date: 2021-11-16 23:47:01
 * @LastEditTime: 2021-11-29 20:20:08
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /C/019.c
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[20]; // 字符数组的数组名里存的就是字符数组的起始地址
    gets(c); // 只能用于 string
    puts(c); // 等价于 printf("%s\n", c);
    system("pause");
    return 0;
}

