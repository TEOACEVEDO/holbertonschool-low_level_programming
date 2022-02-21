#include "main.h"
#include <stdio.h>
/**
* swap_int - Esta funcion sirve para intercambiar
* @a: es la variable de entrada
* @b: es la variable de entrada
* Return: 0
*/
void swap_int(int *a, int *b)
{
int h;

h = *a;
*a = *b;
*b = h;
}
