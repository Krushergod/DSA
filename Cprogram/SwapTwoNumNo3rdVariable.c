#include<stdio.h>
/* This is the program to swap two numbers without using the third variable */
int main()
{
    int a,b;
    printf("We will swap two numbers without using any third variable\n");
    printf("\nEnter first no --> ");
    scanf("%d",&a);
    printf("Enter the other no ---> ");
    scanf("%d",&b);

    printf("\nYou entered a = %d and b = %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nNow after swapping we obtained a = %d and b = %d",a,b);
    return 0;
}
