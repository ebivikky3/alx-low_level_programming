#include "main.h"
/**
 * string_toupper(char *n) - a script that change  all lowercase to uppercase.
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
/* a function that converts lowercase letter to uppercase */
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
