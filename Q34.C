#include <stdio.h>
#include <conio.h>
void main()
{
int x,y,r;
clrscr();
printf("Enter two numbers");
scanf("%d%d",&x,&y);

if(x>0)
r=(4*x)+y;
else if(x<0)
r=(4*x)-y;

printf("Result is:%d",r);
getch();
}