#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - To write a program that prints alphabets in lowercase and then
 * in uppercase, followed by a new line.
 *
 * Return: (0) Always sucess
 */

int main(void)
{
	char x;

	for (x  = 'A'; x <= 'Z'; x++)
	putchar(x);
	putchar('\n');
	return (0);
}
