#include <stdio.h>
#include <conio.h>
int main()
{
	int row,i;
	printf("Input number of row: "); scanf("%d", &row);
	i=1;
	while (i<=row)
	{
		printf("\n"); // Space <New line>
		for (int j=1; j<=row; j++)
		{
			printf("* ");
		}
		i++;
	}
}
