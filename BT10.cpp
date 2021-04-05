#include <stdio.h>
#include <conio.h>
int main()
{
	int row,i;
	i=1; 
	printf("Input number of rows: ");
	scanf("%d", &row);
	while (i<=row) {
		printf("\n");
		for (int j=1; j<=i; j++){
		printf("%d", j);
		}
		i++;
	}
}
