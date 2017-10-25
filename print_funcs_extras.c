#include "holberton.h"

/**
 *
 *
 */
int _print_rot13(va_list list)
{
	char *s = va_arg(list, char *);
	int i = 0, sum = 0;

	if (!s)
		return (-1);
	
	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || 
				(s[i] >= 'A' && s[i] <= 'M'))
			_putchar(s[i] + 13), sum++;
		else if ((s[i] >= 'n' && s[i] <= 'z') ||
					(s[i] >= 'N' && s[i] <= 'Z'))
			_putchar(s[i] - 13), sum++;
		else
			_putchar(s[i]), sum++;
		i++;
	}
	return (sum);
}
/**
 *
 *
 */
int _print_rev(va_list list)
{
	int i, sum;
	char *s = va_arg(list, char *);

	i = 0, sum = 0;
	while (s[i])
		i++;

	while (i >= 0)
		_putchar(s[i]), sum++, i--;
	
	return (--sum);
}
