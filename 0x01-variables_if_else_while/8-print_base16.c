#include <stdio.h>
/**
 * main - it is not clear
 *
 * Return: always (0)
 */
int main(void)
{
	int a = 0;
	char ch = 'a';

	while (a <= 9)
	{
		putchar(a + '0');
		++a;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
