#include "main.h"
/*
 *_printf - creating a printf function
 *@*format: a pointer to format
 *Return: number of char
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	int length = 0;
	va_list arg;
	int (*f)(va_list);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(arg, format);
	for (i = 0; format[i]; i++)
	{
		if (!format[i])
			return (length);
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar(format[i]);
			i++;
			length++;
			continue;
		}
		if (format[i] == '%' && format[i + 1] != '%')
		{
			f = get_option(&format[i + 1]);
			if (f != NULL)
			{
				length += f(arg);
				i++;
				continue;
			}
		}
		if (format[i] == '%' && format[i + 1] == 'K')
		{
			putchar('%');
			putchar('K');
			putchar('\n');
			i++;
		}
		else
		{
			_putchar(format[i]);
			length++;
		}
	}
	va_end(arg);
	return (length);
}
