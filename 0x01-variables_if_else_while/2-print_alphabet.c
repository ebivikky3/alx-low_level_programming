#include <stdio.h>
/**
 * main - To write a program that prints alphabets
 * in lowercase, followed by a new line.
 *
 * Return: (0) Always sucess
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
