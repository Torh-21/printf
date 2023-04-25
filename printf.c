#include "main.h"
/**
 * _printf - produces output according to a format
 *
 * @format: format specifier argument
 *
 * Return: 0 (success)
 */
int _printf(const char *format, ...)
{
	char *str;
	int i, str_count;
	va_list input;

	va_start(input, format);
	str_count = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				custom_putchar(va_arg(input, int));
				i++;
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(input, char *);
				while (str[str_count] != '\0')
				{
					custom_putchar(str[str_count]);
					str_count++;
				}
				i++;
			}
			else if (format[i + 1] == '%')
			{
				custom_putchar('%');
				i++;
			}
		}
		else
		{
			custom_putchar(format[i]);
		}
	}

	va_end(input);
	return (0);
}
