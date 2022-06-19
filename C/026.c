/*
 * @Author: your name
 * @Date: 2022-01-10 22:32:32
 * @LastEditTime: 2022-01-10 23:32:41
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /C/026.c
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i;
    scanf("%d", &i);
    char *p;
    p = (char*)malloc(i);
    // char c;
    // scanf("%c", &c); // 为了去除缓存区里的 \n, 也可以用fflush(stdin)
    fflush(stdin);
    fgets(p, (sizeof p), stdin); // 替换gets
    puts(p);
    return 0;
}