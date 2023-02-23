#include "main.h"
/**
 * _isdigit - function to check for a digit
 * @c: an integer argument
 * Return: 1 is it's true, 0 if it's false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
