#include <stdio.h>
/**
 * main -entry comment
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char sm = 'a';
	char CA = 'A';

	for (; sm <= 'z' ; sm++)
	{
		putchar(sm);
	}
	for (; CA <= 'Z' ; CA++)
	{
		putchar(CA);
	}
	putchar('\n');
		return (0);
}
