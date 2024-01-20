#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,p,s=0;
int m;
clrscr();
printf("Enter the number");
scanf("%d",&n);
m=n;

while(n>0)
{
a=n%10;
p=a*a*a;
s=s+p;
n=n/10;
}
if(m==s)
printf("Armstrong number");
else
printf("Not a armstrong number");
getch();
}