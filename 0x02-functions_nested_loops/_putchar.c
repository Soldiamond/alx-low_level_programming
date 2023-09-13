#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Thats the character being printed
 * Return: On Success 1.
 * On error, -1 is returned, and errno is set apporpriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
