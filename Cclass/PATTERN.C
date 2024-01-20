#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,c=0,d=0,x;
 clrscr();
 for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
 printf("*");
 printf(" ");
}
printf("\n");

for(x=0;x<=d;x++)
printf(" ");

d++;
}

for(i=5;i>=1;i--)
{
for(j=i;j>=1;j--)
{
 printf("%d",j);
 printf(" ");
}
printf("\n");

for(x=0;x<=c;x++)
printf(" ");

c++;
}
getch();
}