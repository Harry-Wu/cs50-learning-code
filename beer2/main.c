/*=============================================================================
#     FileName: main.c
#         Desc: 用while循环实现beer歌, 与beer1.c类似
#       Author: Harry Wu
#        Email: wuxiaohuaer@gmail.com
#     HomePage: --
#      Version: 0.0.1
#   LastChange: 2014-04-07 17:25:06
#      History:
=============================================================================*/
#include <stdio.h>
#include <cs50.h>
//#include <unistd.h>
#include <time.h>
//unsigned int sleep(unsigned int seconds);

int main(int argc, char *argv[])
{
	//ask user for number
	printf("How many bottles will there be?");
	int n = GetInt();

	//exit upon invalid input
	if (n < 1)
	{
		printf("Sorry, that makes no sense.\n");
        return 1;
	}

	//sing the annoying song
	printf("\n");
	while (n > 0)
	{
		printf("%d bottle(s) of beer on the wall, \n", n);
		printf("%d bottle(s) of beer,\n", n);
		printf("Take one down, pass it around,\n");
		printf("%d bottle(s) of beer on the wall.\n\n", n-1);
		n--;
	}

	//exit when song is over
	printf("Wow, that's annoying.\n");
	return 0;
}

