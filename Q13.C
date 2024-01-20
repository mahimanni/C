#include <stdio.h>
#include <conio.h>
void main()
{
int a,d,f;
clrscr();
printf("Enter the age and distance in km");
scanf("%d%d",&a,&d);
if(a<10)
{
if(d<=50)
f=5;
else if((d>=51)&&(d<=100))
f=10;
else if(d>100)
f=15;
}

else if((a>=11)&&(a<=50))
{
if(d<=50)
f=10;
else if((d>=51)&&(d<=100))
f=15;
else if(d>100)
f=20;
}

else if(a>50)
{
if(d<=50)
f=15;
else if((d>=51)&&(d<=100))
f=20;
else if(d>100)
f=25;
}

printf("Fare is:%d",f);
getch();
}