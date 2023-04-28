#include "main.h"
/**
 * print_binary - prints unsigned int argument in binary
 *
 * @input: input argument
 *
 * Return: binary value
 */
int print_binary(va_list input)
{
	int value, a, zeroValue;

	value = va_arg(input, int);
	zeroValue = 1;

	if (value == 0)
	{
		custom_putchar('0' + 0);
		return (0);
	}
	if (value < 0)
		return (-1);

	for (a = 31; a >= 0; a--)
	{
		if (value && (1 << a))
		{
			custom_putchar('0' + 1);
			zeroValue = 0;
		}
		else if (!zeroValue)
		{
			custom_putchar('0' + 0);
		}
	}

	return (value);
}
