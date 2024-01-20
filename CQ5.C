//number is positive or not
#include<stdio.h>
#include<conio.h>
int main()
{
long int a;
clrscr();
printf("enter the number:");
scanf("%ld",&a);
if (a>0)
{printf("the number is positive");}
else
{printf("the number is not positive");}
getch();
return 0;
}
