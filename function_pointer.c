#include <stdio.h>

/**
 * Write a function that points to an array which take operation command from the user
 */

void add(int a, int b)
{
	printf("Addition of %d and %d = %d\n", a,b,a+b);
}

void sub(int a, int b)
{
	printf("Subtraction of %d from %d = %d\n", a,b,a-b);
}

void mul(int a, int b)
{
	printf("Multiplication of %d and %d = %d\n", a,b,a*b);
}

int main()
{
	void (*fun_ptr[])(int, int) = {add, sub, mul};

	int ch, a, b;

	printf("Input the value of a: ");
	scanf("%d", &a);

	printf("Input the value of b: ");
	scanf("%d", &b);

	printf("Operation: 0 for addition, 1 for substraction, 2 for multiplication: ");
	scanf("%d", &ch);

	if (ch > 2) return 0;

	(*fun_ptr[ch])(a,b);

	return 0;
}
