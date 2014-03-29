/*=============================================================================
#     FileName: main.c
#         Desc: 关于全局变量使用上的一个bug
#       Author: Harry Wu
#        Email: wuxiaohuaer@gmail.com
#     HomePage: --
#      Version: 0.0.1
#   LastChange: 2014-03-28 07:49:08
#      History:
=============================================================================*/


#include <stdio.h>
#include <stdlib.h>

//global variable
int x;

//function prototype
void increment(void);

int main(int argc, char *argv[])
{
    printf("x is now %d\n", x);
    printf("Initializing...\n");
    x = 1;
    printf("Initialized!\n");
    printf("x is now %d\n", x);
    printf("Incrementing...\n");
    increment();
    printf("Incremented!\n");
    printf("x is now %d\n", x);
}

//Increments x.
void increment(void)
{
	int x = 10;
	x++;
}
