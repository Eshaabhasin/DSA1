#include<stdio.h>
#include<conio.h>

int main(){
    int a , b , temp;
    printf("Enter the first two digit number a = ");
    scanf("%d",&a);
    printf("Enter the second two digit number b = ");
    scanf("%d",&b);
    printf("The numbers before swaping a = %d and b = %d \n", a,b) ;
    int *ptr , *ptr1;
    ptr = &a;
    ptr1 = &b;
    temp = *ptr;
    *ptr = *ptr1;
    *ptr1 = temp;
    printf("After swaping the numbers are a = %d b = %d", a ,b);
    getch();
}