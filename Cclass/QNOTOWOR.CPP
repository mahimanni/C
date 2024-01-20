#include <stdio.h>
#include <conio.h>
void main()
{
int n,a,r=0,m;clrscr();
printf("Enter a number");
scanf("%d",&n);
while(n>0)
{
a=n%10;
r=a+(r*10);
n=n/10;
}
for(m=r;m>0;m=m/10)
{
 switch(m%10)
 {
 case 1:
{printf("One");break;}
 case 2:
{printf("Two");break;}
 case 3:
{printf("Three");break;}
 case 4:
{printf("Four");break;}
 case 5:
{printf("Five");break;}
 case 6:
{printf("Six");break;}
 case 7:
{printf("Seven");break;}
 case 8:
{printf("Eight");break;}
 case 9:
{printf("Nine");break;}
 default:
{printf("Zero");break;}
 }
 }getch();
 }