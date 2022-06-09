#include <stdio.h>

int main(void)
{
	int a;
	char *b = "FizzBuzz";
	char *c = "Fizz";
	char *d = "Buzz";

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("%s ", b);
		}
		else if (a % 3 == 0)
		{
			printf("%s ", c);
		}
		else if (a % 5 == 0)
		{
			printf("%s ", d);
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
