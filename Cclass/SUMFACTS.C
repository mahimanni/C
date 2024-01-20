#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,f,s=0;
clrscr();
printf("Enter the limit upto which you want to calculate sum of series");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
f=1;
for(j=1;j<=i;j++)
{
 f=f*j;
}
s=s+f;
}
printf("Sum of series is:%d",s);
getch();
}