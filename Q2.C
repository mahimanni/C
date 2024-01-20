#include <stdio.h>
#include <conio.h>
void main()
{
int n,r;
clrscr();
printf("Enter a number");
scanf("%d",&n);
r=n%2;
if(r==0)
printf("Number is even");
else
printf("Number is odd");
getch();
}
