#include <stdio.h>
#include <stdlib.h>
int Han_Xin_5()
{
	int i, j;
	int temp ;
	int temp2 ;

	temp = 9;
	printf("(5)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j)
			{
				printf("X");
			}
			else if (j == temp)
			{
				printf("X");
				temp--;
			}
			else
			{
				printf("-");
			}
		}

		printf("\n");
	}
	system("pause");
}