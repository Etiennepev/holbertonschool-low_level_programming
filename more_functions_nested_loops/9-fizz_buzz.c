#include "main.h"
#include <stdio.h>
/**
 *
 *
 *Return: return 0
 */
int main (void)
{
	int i = 1
	for (; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n");
		}
	}
}
return (0);
