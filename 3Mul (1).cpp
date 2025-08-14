#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    clrscr();
    printf("Enter value of A:");
    scanf("%d",&a);
    printf("Enter value of B:");
    scanf("%d",&b);
    c = a * b;
    printf("Multiplication of a and b:%d\n",c);
    getch();
}