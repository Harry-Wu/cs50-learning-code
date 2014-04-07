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
	for (int i = n; i > 0; i--)
	{
		string s1 = (i == 1) ? "bottle" : "bottles";
		string s2 = (i == 2) ? "bottle" : "bottles";

		/*string s1;
		string s2;

		if (i > 1)
			s1 = "bottles";
		else
			s1 = "bottle";
		if (i > 2)
			s2 = "bottles";
		else
			s2 = "bottle";*/
		printf("%d %s of beer on the wall, \n", i, s1);
		printf("%d %s of beer.\n", i, s1);
		printf("Take one down, pass it around,\n");
		printf("%d %s of beer on the wall.\n\n", i-1, s2);
	}

	//exit when song is over
	printf("Wow, that's annoying.\n");
	return 0;
}

