#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: pointer parameter
 * Author: Engr Adebayo-Qasim Taofiq
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
