/*
 * @Author: your name
 * @Date: 2021-12-16 00:37:30
 * @LastEditTime: 2021-12-16 00:46:13
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /C/022.c
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "asdafsdf";
    char b[4] = "12";
    printf("%s\n", a);
    printf("%s\n", strcat(a, b));
    return 0;
}