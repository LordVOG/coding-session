#include <stdio.h>

const int MAX = 3;

int main()
{
	int var[] = {10, 20, 30};
	int i, *ptr;

	ptr = &var[MAX - 1];

	for (i = MAX; i > 0; i--)
	{
		printf("Address of var[%d] = %p\n", i, ptr);
		printf("Value of %d = %d\n", i, *ptr);

		ptr--;
	}

	return 0;
}
