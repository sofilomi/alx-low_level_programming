#include "main.h"
/**
 * main - check if the input c is digit
 *
 * @c: input
 *
 * Return: 1 if c is digit, else o
 */
int _isgigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
