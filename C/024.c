/*
 * @Author: your name
 * @Date: 2021-12-21 23:58:27
 * @LastEditTime: 2022-01-03 18:08:03
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /C/024.c
 */
#include <stdio.h>

void change(char *p)
{
    *p = 'H'; // 指针法
    p[1] = 'E'; // 下标法
    // *(p+2) = 'L';
    p[2] = 'L';
}

int main()
{
    char a[6] = {"hello"};
    // char a = 'c';
    change(a);
    printf("a=%s\n", a);
    return 0;
}