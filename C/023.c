/*
 * @Author: your name
 * @Date: 2021-12-21 22:56:10
 * @LastEditTime: 2021-12-21 23:28:30
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /C/023.c
 */
#include <stdio.h>

int main()
{
    int a[3] = {2, 5, 7}; // 数组名a为数组的首项地址
    int *p;
    int j;
    p = a;
    j = *p++; // j=*p; p++ 任何时候都把后加加去掉，第二步看优先级是否高于++
    // j = (*p)++;
    // j = p[0]++;
    printf("a[0]=%d, j=%d, *p=%d\n", a[0], j, *p);
    return 0;
}