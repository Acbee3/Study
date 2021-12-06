/*
 * @Author: your name
 * @Date: 2021-11-29 20:27:14
 * @LastEditTime: 2021-11-29 20:53:17
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /C/020.c
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    char c[20] = "liuchao";
    printf("%d\n", strlen(c));
    char d[20];
    strcpy(d, "a");
    puts(d);
    printf("比较结果：%d\n", strcmp(d, c)); // 两个字符串比较，比较的不是长度，而是对应字符位置的ASCII值
    strcat(c, d);
    puts(c);
    return 0;
}

