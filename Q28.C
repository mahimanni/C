#include <stdio.h>
#include <conio.h>
void main()
{
long int H,R,W;
clrscr();
printf("Enter the number of hours and the rate per hour");
scanf("%lld%lld",&H,&R);

if(H<=35)
W=R*H;
else if((H>35)&&(H<=55))
W=1.5*R*H;
else if(H>55)
W=2*R*H;

printf("Weekly wage is:%lld",W);
getch();
}