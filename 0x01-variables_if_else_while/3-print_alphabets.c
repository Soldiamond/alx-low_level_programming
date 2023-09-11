#include <stdio.h>
/**
 * main - Entry point
 *
 * Return : Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* Print lowercase alphabet from 'a' to 'z' */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
/* Print uppercase from 'A' to 'Z' */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	/* Print a new line character */
	putchar('\n');
	return (0);
}
