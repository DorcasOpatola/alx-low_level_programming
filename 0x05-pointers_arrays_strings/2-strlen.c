/**
 * _strlen - returns the length of a string.
 * @s: pointer to String
 * Return: Nothing
 */
#include "main.h"

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
