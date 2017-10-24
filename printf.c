#include "holberton.h"
/**
 * _printf - prints 'f' on standard output
 * @format: string format
 *
 * Return: number of chars printed...so only f so 1 char...lol
 */
int _printf(const char *format, ...)
{
	va_list valist;
	int i, j;
	int sum;
	/* char *stringstr; */
	format_mod mods[] = {
		{"c", _print_char},
		{"s", _print_str},
		{"i", _print_int},
		{"d", _print_int},
		{"%", _print_percent},
		{NULL, NULL}
	};

	if (!format)
		return (-1);

	va_start(valist, format);
	i = 0, j = 0, sum = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			if (!format[i + 1])
				return (-1);
			while (mods[j].mod)
			{
				if (format[i + 1] == (*mods[j].mod))
				{
					sum += mods[j].func(valist);
					i += 2;
					break;
				}
				j++;
			}
			if (!mods[j].mod)
			{
				_putchar(format[i]);
				i++, sum++;
				_putchar(format[i]);
				i++, sum++;
			}
		}
		else
		{
			_putchar(format[i]);
			i++;
			sum++;
		}
	}

	va_end(valist);
	return (sum);
}
