#include <stdio.h>
#include <cs50.h>
//#include <unistd.h>
#include <time.h>
//unsigned int sleep(unsigned int seconds);
void chorus(b);

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
	while (n)
		chorus(n--);
	
	//exit when song is over
	printf("Wow, that's annoying.\n");
	return 0;
}

/*
 * Sings about specified number of bottles.
 */

void chorus(b)
{
		string s1 = (b == 1) ? "bottle" : "bottles";
		string s2 = (b == 2) ? "bottle" : "bottles";

		printf("%d %s of beer on the wall, \n", b, s1);
		printf("%d %s of beer.\n", b, s1);
		printf("Take one down, pass it around,\n");
		printf("%d %s of beer on the wall.\n\n", b-1, s2);
}

