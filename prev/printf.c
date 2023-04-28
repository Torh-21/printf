#include "main.h"
/**
 * _printf - produces output according to a format
 *
 *@format: string argument
 *
 * Return: integer
 */
int _printf(const char *format, ...)
{
	int specs;
	va_list input;

	va_start(input, format);

	if (format == NULL)
		return (-1);

	va_end(input);
	return (specs);
}
