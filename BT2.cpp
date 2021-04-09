#include <stdio.h>
#include <conio.h>
swap(int &a, int &b){ // "&" to save the actual value to a and b
	int c = a;
	a=b;
	b=c;
}

int main(){
int res,num1, num2;
printf("Input Number 1: "); scanf("%d", &num1);
printf("Input number 2: "); scanf("%d", &num2);
res = swap(num1, num2);
printf("After swapping:\nNumber 1: %d\nNumber 2: %d", num1, num2);
getch();
}

/* swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
  
int main()
{
    int x, y;
    printf("Enter Value of x ");
    scanf("%d", &x);
    printf("\nEnter Value of y ");
    scanf("%d", &y);
    swap(x, y);
    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;
}
*/
