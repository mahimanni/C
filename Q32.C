#include <stdio.h>
#include <conio.h>
void main()
{
int charge,w;
clrscr();
printf("Enter the weight of parcel in kg");
scanf("%d",&w);

if(w==1)
{charge=20;}
else
{w=w-1;
charge=20+(w*25);}

printf("Charge for sending the parcel is:%d",charge);
getch();
}