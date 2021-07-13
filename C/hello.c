/*
 * @Author: your name
 * @Date: 2021-04-02 00:11:50
 * @LastEditTime: 2021-04-16 00:13:56
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/第一个程序/index.c
 */

#include <stdio.h>

int main()
{
    double bottleVolume = 1700;  /* Milliliters */
    double cupVolume = 350;      /* Milliliters */
    int numCups;

    numCups = (int)(bottleVolume / cupVolume);
    printf("Number of cups: %d\n", numCups);
    // printf("Hello World");
    // return 0;
}
