#include <stdlib.h>
#include <stdio.h>
/**
 *main - multiply two numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of multiplication or 1
 */
int main(int argc, char *argv[])
{
	int t, a;

if (argc != 3)
{
printf("error\n");
return (1);
}
/* atoi sirve para convertir una string a un int */
t = atoi(argv[1]);
a = atoi(argv[2]);

printf("%d\n", t * a);
return (0);
}
