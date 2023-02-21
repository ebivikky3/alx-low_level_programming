#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	char hex;

	for (c = '0'; c <= '9'; c++)
	putchar(c);
	 for (hex = 'a'; hex <= 'f'; hex++)
        putchar(hex);

	putchar('\n');
	return (0);
}
