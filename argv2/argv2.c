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
#include <string.h>

int main(int argc, char *argv[])
{
	//print arguments
	printf("\n");
	for (int i = 0; i < argc; i++)
	{
		for (int j = 0, n = strlen(argv[i]); j < n; j++)
			printf("%c\n", argv[i][j]);
		printf("\n");
	}
}
