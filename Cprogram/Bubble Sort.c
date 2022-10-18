#include <stdio.h>
#include <windows.h>
//InThis Program Will Sort An Array Using Bubble Sort Algo.
#define cyan "\x1B[36m" //To Give CYAN Color To Font
#define reset "\x1B[0m" //To Reset Font Color
#define red "\x1B[31m" //To Give RED Color To Font
void bubble_sort_arr(int arr[], int size);
void swap(int *a, int *b);
void display(int arr[], int size);
void input(int arr_ptr[], int size);
void arr_null();
void ask();
void out();
void menu();
void heading(int a)
{
 system("cls"); //To Clear Previous Output
 if (a == 0)
 {
 printf(cyan "\t\t\t\t\t\t Welcome\n");
 printf("==========================================Programmer:Kushagra Ojha==========================================\n");
 printf("============================================SAP ID: 1000015336=============================================\n\n" reset);
 return;
 }
 printf(cyan "\n**************************************************************************************************************\n\n" reset);
 if (a == 1)
 {
 printf("\t\t\t\t\t Main Menu\n");
 }
 else if (a == 2)
 { printf("\t\t\t\t\t\tExiting...\n\n");
 }
 else if (a == 3)
 {
 printf("\t\t\t\t\t\tTaking Inputs....\n\n");
 }
 printf(cyan "\n**************************************************************************************************************\n\n" reset);
}
int main()
{
 int size, opt;
 char choice;
A:
 heading(0);
 printf("Enter Size For Your Array:");
 scanf("%d", &size);
 int *arr_ptr = NULL;
 arr_ptr = malloc(size * sizeof(int));
 if (arr_ptr == NULL)
 {
 arr_null();
 return 0;
 }
 input(arr_ptr, size);
 while (1)
 {
 heading(1);
 menu();
 scanf("%d", &opt);
 switch (opt)
 {
 case 1:
 display(arr_ptr, size);
 break;
 case 2:
 bubble_sort_arr(arr_ptr, size);
 break;
 case 3:
 printf(red "Restarting This Program Will Result In Losing All Previous Data\n");
 printf("Do You Want To Continue?[Y/n] " reset);
 fflush(stdin);
 scanf("%c", &choice);
 if (choice == 'y' || choice == 'Y')
 { free(arr_ptr);
 goto A;
 }
 printf(red "\n\nOperation: Restarting of The Program Has Been cancelled\n\n" reset);
 break;
 case 4:
 out();
 break;
 default:
 printf("\nYou Have Entered An Invalid Input\n");
 break;
 }
 ask();
 }
}
void menu()
{
 heading(1);
 printf("\n1. To Display Array Element(s)\n");
 printf("2. To Sort Array In Ascending Order\n");
 printf("3. To Restart This Program\n");
 printf("4. Exit\n");
 printf("Enter Your Choice:");
}
void swap(int *a, int *b)
{
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
}
void arr_null()
{
 char choice;
 printf(red "\nWe Encountered An Error While Allocating Memory\n");
 printf("Do You Want To Retry?(y/n)");
 fflush(stdin);
 scanf("%c", &choice);
 if (choice == 'y' || choice == 'Y')
 {
 main();
 return;
 }
 printf("\nThank You For Using This Program\n");
 printf("Hit Enter To Exit");
 fflush(stdin); getchar();
 exit(0);
}
void ask()
{
 printf("\n\n\nHit Enter To Continue....\n");
 printf("OR Press CTRL+C To Terminate This Program");
 fflush(stdin); //To flush the output buffer of the stream
 getchar(); //To hold screen
 system("cls");
}
void out()
{
 //To Print Greeting When User Choose To Exit From The Program
 heading(2);
 printf("\nThank You For Using This Program\n\n");
 printf("This Program Was Made By");
 printf(cyan "Kushagra Ojha\n\n" reset); //we defind values of "cyan" and "reset" at line no. 5 and 6 respectively
 printf("Hit Enter To Exit......");
 fflush(stdin); //To flush the output buffer of the stream
 getchar(); //To hold screen
 system("cls"); //To clear all the previous outputs by this program before exiting
 exit(0);
}
void input(int arr_ptr[], int size)
{
 heading(3);
 for (int i = 0; i < size; i++)
 {
 if (i == 0)
 {
 printf("Enter 1st Elemets In Array:"); //If asking input for first integer
 }
 else if (i == 1)
 {
 printf("Enter 2nd Elemets In Array:"); //If asking input for second integer
 }
 else if (i == 2)
 {
 printf("Enter 3rd Elemets In Array:"); //If asking input for Third integer
 }
 else
 { printf("Enter %dth Elemets In Array:", i + 1);
 }
 scanf("%d", &arr_ptr[i]);
 }
}
void bubble_sort_arr(int arr[], int size)
{
 for (int i = 0; i < size - 1; i++)
 {
 for (int j = 0; j < size - 1; j++)
 {
 if (arr[j] > arr[j + 1])
 {
 swap(&arr[j], &arr[j + 1]);
 }
 }
 }
}
void display(int arr[], int size)
{
 printf("\n\nElement(s) Of Your List Are:\n");
 for (int i = 0; i < size; i++)
 {
 printf("[%d] ", arr[i]);
 }
}
