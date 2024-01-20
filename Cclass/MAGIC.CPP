#include<stdio.h>
#include<conio.h>
void main()
{
long int n;
int a,s=0,a1,s1=0;
printf("Enter a number");
scanf("%ld",&n);

while(n>0)
{
a=n%10;
s=s+a;
n=n/10;
}

while(s>9)
{
a1=s%10;
s1=s1+a1;
s=s/10;
}
if(