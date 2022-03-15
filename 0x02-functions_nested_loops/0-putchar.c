#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

init main(void)
{
	char text[9] = "_putchar";
	init i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}

