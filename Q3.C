#include <stdio.h>
#include <conio.h>
void main()
{
int n,r;
clrscr();
printf("Enter a number");
scanf("%d",&n);
r=n%8;
if(r==0)
printf("Number is divisible by 8");
else
printf("Number is not divisible by 8");
getch();
}
