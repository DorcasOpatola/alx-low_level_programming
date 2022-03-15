#include "main.h"

/**
 * print_alphabet - prints alphabet in small letters
 *
 * Return: void
 */
void print_alphabet(void)
{
	char length = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

