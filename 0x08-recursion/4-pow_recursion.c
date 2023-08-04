#include "main.h"
int _pow_recursion(int x, int y);

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise argument 
 * @y: power argument 
 * Return: result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
