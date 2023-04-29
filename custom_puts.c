#include "main.h"
/**
 * custom_puts - prints a string
 *
 * @str: string argument
 *
 * Return: length of string
 */
int custom_puts(char *str)
{
	unsigned int i, char_count;

	i = 0;
	char_count = 0;

	if (str)
	{
		while (str[i] != '\0')
		{
			custom_putchar(str[i]);
			char_count += 1;
			i++;
		}
	}

	return (char_count);
}
