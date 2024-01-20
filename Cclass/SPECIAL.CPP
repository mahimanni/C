#include<stdio.h>
#include<conio.h>
void main()
{
long int n,i,f,a,s=0,m;
clrscr();
printf("Enter a number");
scanf("%ld",&n);
m=n;

while(n>0)
{
a=n%10;
f=1;

for(i=1;i<=a;i++)
{f=f*i;}

s=s+f;
n=n/10;
}
if(m==s)
printf("It is a special number");
else
printf("It is not a special number");
getch();
}