#include "main.h"
/**
 * format_checker - checks the format specifers
 *
 * @format: string arguments
 * @input: input argument
 *
 * Return: integer
 */
int format_checker(const char *format, va_list input)
{
	int x, y, specs, count;

	specs = 0;
	check_format specs_array[] = {{"c", custom_putchar}, {"s", custom_puts}, {"d", print_integer}, {"i", print_integer}, {"b", print_binary}, {"%", print_percent_sign}, {NULL, NULL}};

	for (x = 0; format[x]; x++)
	{
		if (format[x] == '%')
		{
			for (y = 0; specs_array[y].strp != NULL; y++)
			{
				if (format[x + 1] == specs.array[y].strp[0])
				{
					count = specs_array[y].func(input);
					if (count == -1)
						return (-1);
					specs += count;
					break;
				}
			}
			if (specs_array[y].strp == NULL && format[x + 1] != ' ')
			{
				if (format[x + 1])
				{
					custom_putchar(format[x]);
					custom_putchar(format[x + 1]);
					specs = specs + 2;
				}
				else
					return (-1);
			}
			x += 1;
		}
		else
		{
			custom_putchar(format[x]);
			specs++;
		}
	}
	return (specs);
}
