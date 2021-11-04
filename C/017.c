/*
 * @Author: your name
 * @Date: 2021-10-31 10:36:37
 * @LastEditTime: 2021-10-31 10:40:39
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/017.c
 */
#include <stdio.h>
#include <stdlib.h>

// 打印数组里的每一个元素，数组在传递时，元素个数传递不过去
void print(int b[], int len)
{
    int i;
    for(i = 0; i < len; i++)
    {
        printf("%3d", b[i]);
    }
    b[4] = 20;
    printf("\n");
}

int main()
{
    int j = 10;
    int a[5] = { 1, 2, 3, 4, 5 };
    int i = 3;
    a[5] = 20; // 访问越界
    a[6] = 21;
    a[7] = 22;
    print("a[5]=%d/n", a[5]);
    print("a[4]=%d/n", a[4]);
    system("pause");
    return 0;
}