#include <stdio.h>
#include <conio.h>
void main()
{
int m,h,net,dm,dh;
clrscr();
printf("Enter the amount spend on mill cloth and on handloom items");
scanf("%d%d",&m,&h);

if(m<1000)
dm=0.02*m;
else if((m>=1000)&&(m<=5000))
dm=0.2*m;
else if((m>=5001)&&(m<=10000))
dm=0.4*m;
else if(m>10000)
dm=0.5*m;

if(h<1000)
dh=0.05*h;
else if((h>=1000)&&(h<=5000))
dh=0.25*h;
else if((h>=5001)&&(h<=10000))
dh=0.5*h;
else if(h>10000)
dh=0.6*h;

printf("discount on mill:%d",dm);
printf("discount on handloom%d",dh);
net=(m-dm)+(h-dh);
printf("Net amount is:%d",net);
getch();
}

