#include <stdio.h>
#include <conio.h>
void main()
{
int n;
double f; clrscr();
printf("Enter the no of days book is returned late");
scanf("%d",&n);
if(n<=5)
f=0.40*n;
else if((n>=6)&&(n<=10))
f=0.65*n;
else if(n>10)
f=0.80*n;

printf("Fine is:%lf",f);
getch();
}
