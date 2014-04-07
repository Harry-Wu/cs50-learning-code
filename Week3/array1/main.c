/*=============================================================================
#     FileName: main.c
#         Desc: 使用数组,常量和四舍五入方式的示范
#       Author: Harry Wu
#        Email: wuxiaohuaer@gmail.com
#     HomePage: --
#      Version: 0.0.1
#   LastChange: 2014-04-07 18:29:18
#      History:
=============================================================================*/
#include <stdio.h>
#include <cs50.h>

#define QUIZZES 2

int main(void)
{
	float grades[QUIZZES], sum;
	int average, i;

	printf("\nWhat were your quiz scores?\n\n");
	for (i = 0; i < QUIZZES; i++)
	{
		printf("Quiz %d of %d: ", i+1, QUIZZES);
		grades[i] = GetFloat();
	}
	sum = 0;
	for (i = 0; i < QUIZZES; i++)
		sum += grades[i];
	average = (int) (sum / QUIZZES + 0.5);

	printf("\nYour average is %d\n\n", average);
    return 0;
}
