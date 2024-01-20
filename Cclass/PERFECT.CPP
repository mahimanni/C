
#include <stdio.h>
#include <conio.h>
void main()
{
int n,i,s=0,m;
clrscr();
printf("Enter a number");
scanf("%d",&n);
m=n;

for(i=1;i<n;i++)
{
if(n%i==0)
s=s+i;
}
if(m==s)
printf("It is a perfect number");
else
printf("It is not perfect number");
getch();
}














































