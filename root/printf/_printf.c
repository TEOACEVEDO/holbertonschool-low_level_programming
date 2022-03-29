#include "main.h"
/**
 *_printf - print string as printf
 * @format: number of arguments
 * Return: void
 */
int _printf(const char *format, ...)
{
va_list args;
unsigned int s, result;

	result = 0;
	va_start(args, format);

	for (s = 0; format[s] != '\0'; s++)
	{
		if (format[s] == '%')
		{
			result += best_print(format[s + 1], &args);
			s++;
		}
	else
		{
			_write(format[s]);
			result++;
		}
	}
	va_end(args);
	return (result);
}
