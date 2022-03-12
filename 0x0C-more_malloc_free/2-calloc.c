#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - function to call memory
 *@nmemb: entry
 *@size: size
 *Return: called memory in 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int o;
char *memoria;

if (nmemb == 0 || size == 0)
	return (NULL);
memoria = malloc(size * nmemb);
if (memoria == NULL)
{
	free(memoria);
	return (NULL);
}
for (o = 0; o < (nmemb * size); o++)
	memoria[o] = 0;
return (memoria);
}
