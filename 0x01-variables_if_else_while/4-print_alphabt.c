#include <stdlib.h>
#include <stdio.h>
/**
 * main- print alphabet except q and e
 *
 * Return: always(0)
 *
 */
int main(void)
{
	char ch = 'a';

	for (; ch <= 'z' ; ch++)
	{
		if (ch == 'e' || ch == 'q')
			++ch;
	putchar(ch);
	}
	putchar('\n');

	return (0);
}

