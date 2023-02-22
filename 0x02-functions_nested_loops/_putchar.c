#include <stdio.h>
/**
 * _putchar - is used to write unsigned character type d to stdout.
 *@d: the character to print
 * Return: On success 1.
 * on error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)

{
	return (write(1, &c, 1));
}
