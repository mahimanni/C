#include <stdio.h>
#include <conio.h>
void main()
{
long int w,b,s;
clrscr();
printf("Enter how long the employee has been working in company and salary of empolyee");
scanf("%lld%lld",&w,&s);
b=0.05*s;
if(w>=10)
{b=b+500;}
printf("BONUS FOR THE EMPLOYEE IS:%d",b);
getch();
}