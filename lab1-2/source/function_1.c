#include <stdio.h>
#include <stdlib.h>
int Han_Xin_1()
{
	int i, j;
	int temp;
	int temp2;
	printf("(1)\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 9) || (j == 0) || (j == 9))
			{
				printf("X");
			}
			else
			{
				printf("-");
			}
		}
		printf("\n");
	}
}