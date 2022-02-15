#include "main.h"
/**
 *print_alphabet_x10 - esto sirve para imprimirlo 10 veces
 *
 *
 */
void print_alphabet_x10(void)
{
char t;
int  count = 0;
while (count < 10)
{
for (t = 'a'; t <= 'z'; t++)
{
_putchar(t);
}
_putchar('\n');
count++;
}

}
