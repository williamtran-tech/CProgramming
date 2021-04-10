#include <stdio.h>
#include <conio.h>
//task 1
int checkPos(int a) {
    while (a<=0) {
        printf("Re-enter number: "); 
        scanf("%d", &a);
    }
    return a;
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
float factorialSum(int a) {
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
    int n,realNum;
    printf("<Function 1> \nEnter a number: "); scanf("%d", &n);
    realNum = checkPos(n);
    printf("\n<Function 2> \nPrime number less or equal %d: ", realNum);
    prime(realNum);
    printf("\n\n<Function 3> \nFirst %d numbers in fibonaci series: ", realNum);
    fibonaci(realNum);
    printf("\n\n<Function 4> \nSum of: 1 + 2/(1+2) + .. + N/(1+2+3+...+N) = %.2lf", sumPlus(realNum));
    printf("\n\n<Function 5> \nSum of: 1 + 2!/(1+2) + .. + N!/(1+2+3+...+N) = %.2lf", factorialSum(realNum));
    getch(); 
}
