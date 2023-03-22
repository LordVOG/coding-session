#include <stdio.h>

/**
 * Write a program that prints address of an array using pointer
 */

const int MAX = 4;

int main()
{
	int var[] = {10, 20, 30};
	int i, *ptr;

	ptr = var;

	for (i = 0; i < MAX; i++)
	{
		printf("Address of var[%d] = %p\n", i, ptr);
		printf("Value of var[%d] = %d\n", i, *ptr);

		ptr++;
	}
	return 0;
}
