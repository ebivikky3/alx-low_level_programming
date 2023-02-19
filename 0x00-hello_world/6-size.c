#include <stdio.h>
/**
 * main - A programe that prints the size of various types on the computer
 * it is compiled and run on
 * Return: (0) Alway success
 */
int main(void)
{
	char charType;
	int integerType;
	long int longintegerType;
	long long int longlongintegerType;
	float floatType;

	printf("Size of char: %ld byte\n", sizeof(charType));
	printf("Size of int: %ld bytes\n", sizeof(integerType));
	printf("Size of long int %ld byte\n", sizeof(longintegerType));
	printf("Size of long long int: %ld byte\n", sizeof(longlongintegerType));
	printf("Size of float: %ld byte\n", sizeof(floatType));

	return (0);
}
