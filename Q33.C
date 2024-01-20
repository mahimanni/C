#include <stdio.h>
#include <conio.h>
void main()
{
long int s,c;
clrscr();
printf("Enter the sales amount");
scanf("%lld",&s);

if(s<=10000)
{
printf("Commission rate is:2%");
c=0.02*s;
}
else if((s>=10001)&&(s<=20000))
{
printf("Commission rate is:3%");
c=0.03*s;
}
else if((s>=20001)&&(s<=50000))
{
printf("Commission rate is:5%");
c=0.05*s;
}
else if((s>=50001)&&(s<=70000))
{
printf("Commission rate is:8%");
c=0.08*s;
}
else if(s>70000)
{
printf("Commission rate is:10%");
c=0.1*s;
}
printf("Commission is:%lld",c);
getch();
}


