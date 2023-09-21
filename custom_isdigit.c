#include "main.h"

/**
 * custom_isdigit - A custom function
 * @c: Parameter check
 * Return: 0
 */

int custom_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
