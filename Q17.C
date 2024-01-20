#include <stdio.h>
#include <conio.h>
void main()
{
int w,r;
clrscr();
printf("Enter the water consumed in gallons");
scanf("%d",&w);
if(w<=50)
r=0;
else if((w>50)&&(w<100))
r=500;
else if((w>100)&&(w<200))
r=800;
else if((w>200)&&(w<300))
r=1100;
else if(w>300)
r=1700;
printf("The tax is:%d",r);
getch();
}