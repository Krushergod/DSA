#include<stdio.h>

int factorial(int n)
{
   if(n==0)
      return(1);
  
   //Function calling itself: recursion
   return(n*factorial(n-1));
}
int main()
{
   int num, fact;
   printf("Enter a positive integer number: ");
   scanf("%d",&num);

   if(n >= 0)
   {
      fact = factorial(num);
       //Displaying factorial of input number
      printf("\nfactorial of %d is: %d", num, fact);
  
   }
   else 
      printf("Invalid input");
  
   return 0;
}
