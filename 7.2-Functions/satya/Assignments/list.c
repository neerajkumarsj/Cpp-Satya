#include <stdio.h>

int main()
{
	int a[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int b[12], c[3];
	int i, k = 0, j = 0;
	for (i = 0; i < 15; i++)
	{		
		if (i % 5 == 0)
		{
			c[k] = a[i];
			k++;
		}

		else
		{
			b[j] = a[i];
			j++;
		}
	}
	printf("B array :\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d\t", c[i]);
	}
	putchar('\n');
	

	printf("C array :\n");
	for (i = 0; i < 12; i++)
	{
		printf("%d\t", b[i]);
	}
	putchar('\n');
}
