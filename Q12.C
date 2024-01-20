#include <stdio.h>
#include <conio.h>
void main()
{
long int s,c;
int grade;
clrscr();
printf("Enter the sales");
scanf("%lld",&s);
if(s<=10000)
{
  grade=3;
  c=0.05*s;
}
else if((s>10000)&&(s<=20000))
{
grade=2;
c=0.08*s;
}
else if(s>20000)
{
grade=1;
c=0.1*s;
}
printf("Commission of employee:%lld",c);
printf("Grade:%d",grade);
getch();
}