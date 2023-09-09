#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 )Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		int num = n % 10;

		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if ((n % 10 < 6 && n % 10 != 0))
	{
		int num = n % 10;

		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	}
	return (0);
}
