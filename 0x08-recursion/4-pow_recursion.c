/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise to the power of y
 * @y: value to raise x to the power
 * Return: x to the power of y, 1 when y == 0 and -1 when y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 1)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
