#ifndef PRINT_H
#define PRINT_H

/*standard libs*/
#include <stdarg.h>
#include <stdlib.h>

/*helper functions that will do the helping*/
int _putchar(char);
int _print_int_helper(int);
/* int _print_int_count_helper(int); */

/*printing functions that will do the printing */
int _print_int(va_list);
int _print_str(va_list);
int _print_char(va_list);
int _print_percent(va_list);
int _print_rev(va_list);
int _print_rot13(va_list);
/**
 * struct selector_struct - structure that holds format mods and their function
 * @sel: what selector to choose
 * @func: func for its respective mod
 */
typedef struct selector_struct
{
	char *sel;
	int (*func)(va_list);
} format_selector;

/*main functions to prototype*/
int _printf(const char *format, ...);
int _mini_vprintf(const char *format, va_list list, format_selector mods[]);

#endif
