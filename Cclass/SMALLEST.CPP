#include <stdio.h>
#include <conio.h>
void main()
{
int n,m,a,p=0,i;
clrscr();
printf("Enter a number");
scanf("%d",&n);



for(i=0;i<=9;i++)
{
 m=n;
while(m>0)
{
a=m%10;
if(a==i)
{printf("Smallest digit is:%d",i);
p=1;
break;}
m=m/10;
}
if(p==1)
break;
}
getch();
}

