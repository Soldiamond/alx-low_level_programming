#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %1u byte(s)\n", sizeof(char));
	printf("Size of an int: %4u byte(s)\n", sizeof(int));
	printf("Size of a long int: %4u byte(s)\n", sizeof(long));
	printf("Size of a long long int: %8u byte(s)\n", sizeof(long long));
	printf("size of a float: %4u byte(s)\n", sizeof(float));
	return (0);
}
