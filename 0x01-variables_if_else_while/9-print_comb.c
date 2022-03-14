#include <stdio.h>
/**
 * main - numbers less than nine
 *
 * Return: (0)
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');

		if (a == 9)
		break;
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');

	return (0);
}
