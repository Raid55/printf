#include "holberton.h"
/**
 * _print_int - prints int with helper functions help
 * @list: va_arg list
 *
 * Return: count of printed chars
 */
int _print_int(va_list list)
{
	int n = va_arg(list, int);

	return (_print_int_helper(n));
}
/**
 * _print_str - prints string
 * @list: va_arg list
 *
 * Return: count of chars printed
 */
int _print_str(va_list list)
{
	int i = 0;
	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";
	while (s[i])
		_putchar(s[i]), i++;

	return (i);
}
/**
 * _print_char - prints char
 * @list: va_arg list
 *
 * Return: count of char printed...so 1
 */
int _print_char(va_list list)
{
	char c = va_arg(list, int);

	/* if (!c) */
		/* c = ' '; */
	_putchar(c);

	return (1);
}
/**
 * _print_percent - prints percent
 * @list: list of va_args
 *
 * Return: 1, since only prints 1 char
 */
int _print_percent(va_list list)
{
	(void)list;

	_putchar('%');

	return (1);
}
