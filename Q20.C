#include <stdio.h>
#include <conio.h>
void main()
{
int q,a,d,dis,bill;
clrscr();
printf("Enter the quantity bought and total amount and the day of payment");
scanf("%d%d%d",&q,&a,&d);
if(q<5)
dis=0;
else if((q>=5)&&(q<25))
dis=0.05*a;
else if((q>=25)&&(q<50))
dis=0.1*a;
else if((q>=50)&&(q<100))
dis=0.15*a;
else if(q>100)
dis=0.2*a;

if(d<=3)
dis=dis+(0.05*a);

bill=a-dis;
printf("The bill amount is:%d",bill);

getch();
}