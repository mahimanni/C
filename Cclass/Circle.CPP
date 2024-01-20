#include<stdio.h>
#include<conio.h>
void main()
{
double r,a,c,sa,sc,sp;
clrscr();
int m;
printf("Enter the radius");
scanf("%lf",&r);
printf("Enter 1 for area and 2 for circumference , 3 for area of semicircle , 4 for circumference of semicircle and 5 for perimeter");
scanf("%d",&m);

switch(m)
{
case(1):
{
a=r*r;
printf("Area is:%lf",a);
break;
}
case(2):
{
c=2*3.14*r;
printf("Circumference is:%lf",c);
break;
}
case(3):
{
sa=(3.14*r*r)/2;
printf("Area of semicircle:%lf",sa);
break;
}
case(4):
{
sc=3.14*r;
printf("Circumference of semicircle%lf",sc);
break;
}
case(5):
{
sp=3.14*r;
printf("Perimeter of semicircle:%lf",sp);
}default:
{
printf("Wrong Choice");
break;
}}
getch();
}
