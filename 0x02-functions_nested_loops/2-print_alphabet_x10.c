#include "main.h"
/**
 * print_alphabet_x10 - ten times list of alphabet
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{

	char ch;
	int x = 0;

	while (x < 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		x++;

	}
	}
