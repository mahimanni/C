#include <stdio.h>
#include <conio.h>
void main()
{
int d,i,charge,dis;
clrscr();

printf("Enter the no of days for which the bicycle is hired");
scanf("%d",&d);

printf("Press 1 for Spring or 2 for Summer or 3 for Autumn or 4 for Winter season");
scanf("%d",&i);

if(i==1)
charge=4*d;
else if(i==2)
charge=7*d;
else if(i==3)
charge=3*d;
else if(i==4)
charge=2*d;

if(d>10)
{
dis=0.30*charge;
charge=charge-dis;
}
charge=charge+100;

printf("Hire charge is:%d",charge);
getch();
}
