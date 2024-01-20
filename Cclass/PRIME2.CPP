#include<stdio.h>
#include<conio.h>
void main()
{
int n,c=0,i;
clrscr();
printf("Enter a number");
scanf("%d",&n);

for(i=2;i<n/2;i++)
{
if(n%i==0)
c++;
}
if(c==0)
printf("Prime number");
else
printf("Not a prime number");
getch();
}

