#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char ch;

	/* Print lowercase alphabet, excluding 'q' and 'e' */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	/* Print a newline character */
	putchar('\n');
	return (0);
}
