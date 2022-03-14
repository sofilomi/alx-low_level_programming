#include <stdio.h>
/**
 * main - reverse lower case
 *
 * Return: always (0)
 */
int main(void)
{
char ch = 'z';
for (; ch >= 'a'; ch--)
{
	putchar(ch);
}
putchar('\n');

return (0);
}
