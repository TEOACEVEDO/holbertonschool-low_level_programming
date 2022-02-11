#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, z;

srand(time(0));
n = rand() - RAND_MAX / 2;
z = n % 10;
if (z > 5)
{
printf("%d and is greater than 5");
}
else if (z == 0)
{
printf("%d and is 0");
}
else
(z < 6; z != 0)
{
printf("%d and is less than 6 and not 0");
}
return (0);
}
