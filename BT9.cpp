#include <stdio.h>
#include <conio.h>
int main()
{
	int row,i;
	i=1;
	printf("Input number of row: "); scanf("%d", &row);
	while (i<=row)
	{
			// row
		printf("\n");
		if (i==1 || i == row) {
			for (int j=1; j<=row; j++){
				printf("* ");
			}
		}
			// column
		else{ //if (i!=1 && i!=row)
			printf("* ");
			for (int j=1; j<=row; j++)
			{
				if (j!=1 && j!=row){
					printf("  ");
				}
				else if (j==row){
					printf("* ");
				}
			}
		}
		i++;
	}
	return 0;
}

