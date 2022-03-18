#include "main.h"
/**
 * _isupper - check upper letter
 * @c: input letter
 * Return: 1 if c is upper and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
