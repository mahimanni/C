#include <stdio.h>
#include <conio.h>
void main()
{
int n,d;
clrscr();
printf("Enter numerator and denominator");
scanf("%d%d",&n,&d);
if(n%d==0)
printf("It is divisible");
else
printf("It is not divisible");
getch();
}