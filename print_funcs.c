#include "main.h"
/**
 * _putchar - prints a character
 *
 * @args: input argument
 *
 * Return: integer
 */
int _putchar(va_list args)
{
	custom_putchar(va_arg(args, int));
	return (1);
}

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

/**
 * print_percent_sign - prints the percent symbol
 *
 * @input: input argument
 *
 * Return: integer
 */
int print_percent_sign(__attribute__((unused))va_list input)
{
        custom_putchar('%');
        return (1);
}

/**
 * print_integer - prints integers from specifiers
 *
 * @a: integer argument
 *
 * Return: integer
 */
int print_integer(int a)
{
        long int x;
        int y, div;

        y = 0;
        div = 1;
        x = a;
        while (x > 9)
        {
                div *= 10;
                x = (x / 10);
        }
        while (div >= 1)
        {
                x = (a % div);
                a /= div;
                custom_putchar('0' + a);
                a = x;
                div /= 10;
                y++;
        }
        return (y);
}

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
