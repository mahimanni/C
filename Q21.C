#include <stdio.h>
#include <conio.h>
void main()
{
int ms,s,a;
printf("Press 1 for married and 2 for unmarried");
scanf("%d",&ms);

printf("Press 3 for male and 4 for female");
scanf("%d",&s);

printf("Enter the age");
scanf("%d",&a);
clrscr();

if(ms==1)
printf("Driver can be insured");
else if((ms=2)&&(s==3)&&(a>30))
printf("Driver can be insured");
else if((ms==2)&&(s==4)&&(a>25))
printf("Driver can be insured");
else
printf("Driver can not be insured");

getch();
}