#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer int type
 * @n: is a int variable
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i, inte;

for (i = 0; i < n; i++)
{

inte = *(a + i);

printf("%d", inte);

if (i != n - 1)
printf(", ");
}

printf("\n");
}