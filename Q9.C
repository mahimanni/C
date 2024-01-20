#include <stdio.h>
#include <conio.h>
void main()
{
int s,c;
clrscr();
printf("Enter the monthly sale amount of a salesman");
scanf("%d",&s);
if(s>=10000)
{
c=0.1*s;
printf("Commisiion is:%d",c);
}
else
{
c=0.05*s;
printf("Commisiion is:%d",c);
}
getch();
}