/*=============================================================================
#     FileName: argv1.c
#         Desc: 
#       Author: Harry Wu
#        Email: wuxiaohuaer@gmail.com
#     HomePage: --
#      Version: 0.0.1
#   LastChange: 2014-03-29 22:40:57
#      History:
=============================================================================*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	//print arguments
	printf("\n");
	for (int i = 0; i <= argc; i++)
		printf("%s\n", argv[i]);
	printf("\n");
}
