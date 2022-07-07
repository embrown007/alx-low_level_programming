#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even  number < 4,000,000
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}

