#include <stdio.h>
#include <conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the coefficient of x^2,x and enter the constant");
scanf("%d%d%d",&a,&b,&c);
int d;
d=(b*b)-(4*a*c);
if(d>0)
printf("Roots are real and unequal");
else if(d==0)
printf("Roots are real and equal");
else if(d<0)
printf("Roots are complex and imaginary");
getch();
}