#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void input(int a[], int &n) {
    printf("Enter number of elements: "); scanf("%d", &n);
    for (int j=0; j<=n-1; j++){
        printf("Enter number %d:", j);
        scanf("%d", &a[j]);
    } 
}

void print (int a[], int n) {
    for (int i=0; i <= n-1; i++){
        printf("%d ", a[i]); 
    }
}

int sum (int a[], int n) {
    int s=0;
    for (int i=0; i <= n-1; i++){
            s = s + a[i];
    }
    return s;
}

int index(int a[], int n) {
    int i;
    printf("Enter number of element: ");
    scanf("%d", &i);
    return a[i];
}

int max(int a[], int n) {
    int m = a[0];
    for (int i = 1; i<=n-1; i++) {
        if (a[i]>m) m = a[i];
    }
    return m;
}

int min(int a[], int n) {
    int sm = a[0];
    for (int i = 1; i<=n-1; i++) {
        if (a[i]<sm) sm = a[i];
    }
    return sm;
}
int main() {
    int func, n=0, a[100];
    do {
    system("CLS");
    printf("------------------MENU-------------------\n");
    printf("1. Enter an integer array that has N number\n");
    printf("2. Print all elements to the screen\n");
    printf("3. Sum values of array\n");
    printf("4. Calculate the average of the array elements\n");
    printf("5. Find the index of an array elements\n");
    printf("6. Find the maximum number of the array\n");
    printf("7. Find the minimum number of the array\n");
    printf("8. Quit\n");
    printf("-----------------------------------------\n");
    printf("Enter a number of function: \n");
    scanf("%d", &func);
        switch (func){
            case 1: 
                input(a, n);
                getch();
                break;
            case 2:
                print(a, n);
                getch();
                break;
            case 3:
                printf("Sum values of array: %d",  sum(a, n));
                getch();
                break;
            case 4: 
                printf("The average of the array elements is: %.2f",sum(a,n)/(float)n);
                getch();
                break;
            case 5:
                printf("Index of this element is: %d", index(a,n));
                getch();
                break;
            case 6:
                printf("Maximum number of the array is: %d", max(a,n));
                getch();
                break;
            case 7: 
                printf("Minimum number of the array is: %d", min(a,n));
                getch();
                break;
            case 8: break;   
        }
    } while (func != 8);
}