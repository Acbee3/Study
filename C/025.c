/*
 * @Author: your name
 * @Date: 2022-01-04 23:27:44
 * @LastEditTime: 2022-01-04 23:34:41
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /C/025.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    scanf("%d", &i);
    char *p;
    p = (char*)malloc(i); // 申请动态空间
    strcpy(p, "malloc successfully");
    puts(p);
    free(p);
    return 0;
}