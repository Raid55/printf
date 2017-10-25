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
	int sum;
	/* char *stringstr; */
	format_selector mods[] = {
		{"c", _print_char},
		{"s", _print_str},
		{"i", _print_int},
		{"d", _print_int},
		{"R", _print_rot13},
		{"%", _print_percent},
		{NULL, NULL}
	};

	if (!format)
		return (-1);

	va_start(valist, format);
	sum = _mini_vprintf(format, valist, mods);
	va_end(valist);
	return (sum);
}
/**
 * _mini_vprintfv - formats string and prints it once formated
 * @format: const string format
 * @list: va_args list
 * @mods: mods struct with all print functions
 *
 * Description: function that does most of the work
 * printf would do but just spliting the workload
 * Return: sum of all printed chars
 */
int _mini_vprintf(const char *format, va_list list, format_selector mods[])
{
	int i, j, sum, tmpSum;

	i = 0, j = 0, sum = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			if (!format[i + 1])
				return (-1);
			while (mods[j].sel)
			{
				if (format[i + 1] == (*mods[j].sel))
				{
					tmpSum = mods[j].func(list);
					if (tmpSum == -1)
						return (-1);
					sum += tmpSum, i += 2;
					break;
				}
				j++;
			}
			if (!mods[j].sel)
			{
				_putchar(format[i]), i++, sum++;
				_putchar(format[i]), i++, sum++;
			}
		}
		else
			_putchar(format[i]), i++, sum++;
	}
	return (sum);
}
