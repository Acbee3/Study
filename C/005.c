/*
 * @Author: your name
 * @Date: 2021-04-21 00:01:56
 * @LastEditTime: 2021-09-22 20:16:29
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/005.c
 */
#include <stdio.h>
#include <math.h>

int main() 
{
    unsigned int sum = 0; 
    int temp = 0;
    int i;
    int weight;
   for(i = 0; i < 65; i++)
   {
       temp = pow(2, i);
       sum = sum + temp;
   }
   weight = sum / 250000;
   printf("麦子总共重%d", weight);
}