#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//task 1
void checkPos(int &a) {
    printf("Enter a positive number: "); scanf("%d", &a);
    while (a<=0) {
        printf("Re-enter number: "); 
        scanf("%d", &a);
    }
  //  return a;
}
//task 2
void prime(int a) {
    int j;
    if (a>=1) printf("%d ", 1);
    if (a>=2) printf("%d ", 2);
    for (int i=3; i<=a;i++){
        for (j=2; j<=i-1; j++)
            if (i%j==0) break;
            else if (i%j!=0){
                if (j=i-1) printf("%d ", i);
                continue;
            }
    }   
}
//task 3
void fibonaci(int a) {
    int array[a];
    array[0]=0;
    array[1]=1;
    for (int i=1; i<=a; i++) {
        array[i+1]=array[i]+array[i-1];
    }
    for (int i=0; i<=a-1; i++){
        printf("%d ", array[i]);
    }
} 
//task 4
float sumPlus(int a) {
   int sum=0;
   float sumP=0.0;
   for (int i = 1; i <= a; i++){
       for (int j = 1; j <= i; j++){
           sum = sum + j;
       }
       sumP = sumP + i / (float)sum;
       sum=0;
   }
   return sumP;
}
//task 5
double factorialSum(int a) {
    int sum=0, fac=1;
    double facSum=0.0;
    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= i; j++) {
            sum = sum + j;
            fac = fac * j;
        }
        facSum = facSum + fac / (float)sum;
        sum = 0;
        fac = 1;
    }
    return facSum;
}
int main(){
    int n=0, function;
    do {
    system("CLS");
    printf("----------------Menu--------------\n");
    printf("1. Check positive number\n");
    printf("2. Prime number less or equal %d: \n", n);
    printf("3. First %d numbers in fibonaci series: \n", n);
    printf("4. Sum of: 1 + 2/(1+2) + .. + N/(1+2+3+...+N) = \n");
    printf("5. Sum of: 1 + 2!/(1+2) + .. + N!/(1+2+3+...+N) = \n");
    printf("6. Quit\n");
    printf("----------------------------------\n");
    printf("Choose a function: ");
    scanf("%d", &function);
    switch(function) {
        case 1:
            checkPos(n);
            getch();
            break;
        case 2:
            printf("\n<Function 2> \nPrime number less or equal %d: ", n);
            prime(n);
            getch();
            break;
        case 3: 
            printf("\n\n<Function 3> \nFirst %d numbers in fibonaci series: ", n);
            fibonaci(n);
            getch();
            break;
        case 4:
            printf("\n\n<Function 4> \nSum of: 1 + 2/(1+2) + .. + N/(1+2+3+...+N) = %.2lf", sumPlus(n));
            getch();
            break;
        case 5:
            printf("\n\n<Function 5> \nSum of: 1 + 2!/(1+2) + .. + N!/(1+2+3+...+N) = %.2lf", factorialSum(n));
            getch();
            break;
        case 6: break;
    }
    } while (function!=6);
}
