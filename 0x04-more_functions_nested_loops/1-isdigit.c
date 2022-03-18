#include "main.h"
/**
 * main - check if the input c is digit
 *
 * @c: input
 *
 * Return: 1 if c is digit, else o
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
