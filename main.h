#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

typedef struct formats
{
	char *strp;
	int (*func)(va_list);
} check_format;

int custom_putchar(char c);
int _putchar(va_list args);
int custom_puts(char *str);
int print_integer(int a);
int print_binary(va_list input);
int print_percent_sign(__attribute__((unused))va_list input);
int format_checker(const char *format, va_list input);
int _printf(const char *format, ...);

#endif /* MAIN_H */
