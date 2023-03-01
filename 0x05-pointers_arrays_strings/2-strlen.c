#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @str: Thestring to get the length.
 *
 * Return: The length of @str.
 */
size_t_strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
