#include <stdio.h>
#include <ctype.h>
/**
 * main - To write a program that prints alphabets
 * in lowercase, followed by a new line.
 */

int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
	putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
