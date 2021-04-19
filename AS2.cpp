#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void input(int ID[100],float grade[100],int &num);
void print( int ID[],float grade[],int num);
void MAX(  int ID[],float grade[],int num);
void MIN( int ID[],float grade[],int num);

int main( )
{
    int ID[100];
    float grade[100];
    int num = 0,func = 0;
    do
    {
    	system("CLS");
        printf("_______________________MENU_________________________\n");
        printf("1. Enter student ID(s), student's grades.             \n");
        printf("2. Print all student ID(s) together with their grades.\n");
        printf("3. Student has the highest grade.                     \n");
        printf("4. Student has the lowest grade.                      \n");
        printf("5. Quit.                                              \n"      );
        printf("_____________________________________________________\n");
        printf("Enter function-number: ");
        scanf("%d",&func);
        switch (func) {
            case 1:
                input(ID,grade,num);
                getch();
                break;
            case 2:
                print(ID,grade,num);
                getch();
                break;
            case 3:
                MAX(ID,grade,num);
                getch();
                break;
            case 4:
                MIN(ID,grade,num);
                getch();
                break;   
        }
    }while(func!=5);
    return 0;
}

void input(int ID[100],float grade[100],int &num)
{
    printf("How many students do you want to enter grade:");
    scanf("%d",&num);
    for (int i=0; i<num;i++)
    {
        printf("Student's ID: ");
        scanf("%d",&ID[i]);  
        while (i >= 1) {
            int t;
            for (int z = 0; z<i; z++){
                while (ID[z] == ID[i]) {
                    printf("ID existed. Re-enter ID: ");
                    scanf("%d", &ID[i]);
                    t = z;
                }
            }
        if (ID[t] != ID[i])
            break;
        }
        printf("Grade: ");
        scanf("%f",&grade[i]);
        while (grade[i]>10 || grade[i] < 0) {
            printf("Grade scale is from 0-10\nPlease re-enter grade: ");
            scanf("%f", &grade[i]);
        }  
	}
}

void print( int ID[100],float grade[100],int num)
{
    for (int i=0; i<num ;i++)
    {
        
        printf("ID: %d\tGrade: %.2f\n",ID[i],grade[i]);
    }
}

void MAX(  int ID[],float grade[],int num)
{
    printf("Student ID(s) has the highest grade: ");
    float max = grade[0];
    for (int i=0; i<num; i++) {
        if (max<=grade[i]) {
            max=grade[i];
        }
    }
    for (int i=0;i<num;i++)
    {
        if (max==grade[i]) {
            printf("|%d|  ",ID[i]);
        }
    }
        printf("(Grade: %.2f)\n",max);
}

void MIN( int ID[],float grade[],int num)
{
   
    printf("Student ID(s) has the lowest grade:  ");
    float min = grade[0];
    for (int i=0; i<num; i++) {
        if (min>=grade[i]) {
            min=grade[i];
           
        }
    }
    for (int i=0;i<num;i++)
    {
        if (min==grade[i]) {
            printf("|%d|  ",ID[i]);
        }
    }
        printf("(Grade: %.2f) \n",min);
}
