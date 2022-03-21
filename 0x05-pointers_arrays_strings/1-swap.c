#include "main.h"
/**
 * reset_to_98 - takes a pointer and updates the value it point to
 * @n: pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
