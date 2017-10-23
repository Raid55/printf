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
		{NULL, NULL}
	};

	va_start(valist, format);
	i = 0, j = 0, sum = 0;

	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
			_putchar('%'), sum++, i += 2;
		else if (format[i] == '%')
			/*start of mods while logic*/
			while (mods[j++].mod)
				if (format[i + 1] == (*mods[j - 1].mod))
					sum += mods[j - 1].func(valist), i += 2;
			/*end of while logic*/
			/*prints format and incr sum by 1*/
		if (format[i])
			_putchar(format[i]), j = 0, sum++, i++;
	}
	va_end(valist);
	return (sum);
}
