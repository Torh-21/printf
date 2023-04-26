#include "main.h"
/**
 * _printf - produces output according to a format
 *@format: string argument
 * Return: character count
 */
int _printf(const char *format, ...)
{
	char *str;
	int i, char_count;
	va_list input;

	char_count = 0;
	va_start(input, format);
	if (format == NULL)
		return (-1);

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
				custom_puts(str);
				i++;
			}
			else if (format[i + 1] == '%')
			{
				custom_putchar('%');
				i++;
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				y = va_arg(input, int);
				if (y < 0)
				{
					custom_putchar('-');
					y = -y;
				}
				char_count += print_integer(y);
				i++;
			}
			else
			{
				return (-1);
			}
			char_count++;
		}
		else
		{
			custom_putchar(format[i]);
			char_count++;
		}
	}

	va_end(input);
	return (char_count);
}
