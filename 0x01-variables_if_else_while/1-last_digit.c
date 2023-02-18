#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that will assign a random number
 * Return: 0 (Success)
 */

int main(void)

{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("last digit of %d is %d and is greater than S\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d id %d and is 0\n", n, a);
	}
	else if (a < 6 && a! = 0)
	{
		printf("Last diigit of %d is %d and is less than 6 and not 0\n", n, a);
	}

	return (0);
}


