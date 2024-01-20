#include<stdio.h>
#include<conio.h>
void main()
{
char g;
long int s,a,net;
clrscr();
printf("Enter the grade and salary of employee");
scanf("%c%ld",&g,&s);
switch(g)
{
case 'A':
a=300;break;
case 'B':
a=250;break;
default:
a=100;break;
}
net=s+a;
printf("Salary is:%ld",net);
getch();
}