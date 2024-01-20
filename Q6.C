#include <stdio.h>
#include <conio.h>
void main()
{
int y;
clrscr();
printf("Enter a year");
scanf("%d",&y);
if((y%4==0)&&(y%100!=0))
printf("The given year is a leap year");
else if(y%400==0)
printf("The given year is a leap year");
else
printf("The given year is not a leap year");
getch();
}