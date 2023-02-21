#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - To write a program that prints alphabets
 * in lowercase, followed by a new line.
 *
 * Return: (0) Always sucess
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
