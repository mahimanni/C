#include<stdio.h>
#include<conio.h>
void main()
{
float n,a,c; clrscr();
printf("Enter the number of calls");
scanf("%f",&n);

if(n<=100)
{
a=100;
}
else if((n>100)&&(n<=150))
{
  c=n-100;
a=(2*c)+100;
}
else if(n>150)
{
c=n-150;
a=(2.5*c)+200;
}
printf("Amount for telephone bill:%f",a);
getch();
}