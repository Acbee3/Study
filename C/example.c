/*
 * @Author: your name
 * @Date: 2021-04-15 23:38:29
 * @LastEditTime: 2021-04-15 23:38:29
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/example.c
 */
#include <stdio.h>

/*
 * CSE 251
 * Name: Marshal Newrock
 *
 * Sample Program
 */

int main()
{
    /* Declare variables */
    int a;
    double b;

    /* get values for variables */
    printf("Enter integer for a: ");
    scanf("%d", &a);

    printf("Enter floating point number for b: ");
    scanf("%lf", &b);

    /* tell if a is small or large */
    if(a > 10)
    {
        printf("a is large!\n");
        printf("a=%d\n", a);
    }
    else
    {
        printf("a is small.\n");
        printf("a is only %d\n", a);
    }

    /* print b to 3 decimal places */
    printf("b = %.3lf\n", b);
}