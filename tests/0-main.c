#include <stdio.h>
#include <stdlib.h>
#include "../sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int array[] = {19, 37, 7, 67, 66, 6, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	return (0);
}
