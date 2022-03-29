#ifndef FILE_MAIN
#define FILE_MAIN
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct flag -flag object
 * @letter: flag char
 * @prnt: print function pointer
 * Descriptions: contains flag letter and corresponding print function
 **/
typedef struct flag
{
	char letter;
	int (*prnt)(va_list *);
} find_flag;

int _printf(const char *format, ...);
int best_print(char c, va_list *args);
int p_string(char *s);
int _write(char c);
int p_int(int number);
int exponent(int x, int y);
int p_bin(unsigned int num);
int p_intu(unsigned int number);

int print_rstr(va_list *args);
int print_string(va_list *args);
int print_int(va_list *args);
int print_char(va_list *args);
int print_bin(va_list *args);
int print_intu(va_list *args);

#endif
