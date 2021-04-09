#include <stdio.h>
#include <conio.h>
int findGreatest(int a, int b){
	return(a>b)?a:b;
}
 
int main(){
	int n1,n2;
	printf("Input two numbers: \n"); scanf("%d %d", &n1, &n2 );
	int largest = findGreatest(n1,n2);
	printf("The largest number is: %d", largest);
	getch();
}
