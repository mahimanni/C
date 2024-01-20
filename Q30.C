#include <stdio.h>
#include <conio.h>
void main()
{
int u,b;
clrscr();
printf("Enter the number of units consumed");
scanf("%d",&u);
if(u<=100)
b=250;

else if((u>100)&&(u<=150))
b=250+((u-100)*0.40);

else if((u>150)&&(u<=200))
b=270+((u-150)*0.50);

else if((u>200)&&(u<=250))
b=295+((u-200)*0.6);

printf("The monthly bill is:%d",b);
getch();
}