#include <stdio.h>
#include <conio.h>
void main()
{
long int n,m,s,p; int j,a,c=0,q=1;
clrscr();
printf("Enter a number");
scanf("%ld",&n);
m=n;
while(m>0)
{
a=m%10;
c++;
m=m/10;
}

s=n*n;
for(j=0;j<c;j++)
q=10*q;

p=s%q;
if(n==p)
printf("It is an automorphic number");
else
printf("It is not an automorphic number");
getch();
}
