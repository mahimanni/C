#include <stdio.h>
#include <conio.h>
void main()
{
int m1,m2,m3;
int p;
clrscr();
printf("Enter the marks in three subjects");
scanf("%d%d%d",&m1,&m2,&m3);
p=((m1+m2+m3)*100)/300;
printf("percentage is:%d\n",p);
if(p>=90)
printf("Grade is A+");
else if((p>=80)&&(p<=89))
printf("Grade is A");
else if((p>=70)&&(p<=79))
printf("Grade is B+");
else if((p>=60)&&(p<=69))
printf("Grade is B");
else if((p>=50)&&(p<=59))
printf("Grade is C+");
else if(p<50)
printf("Fail");

getch();
}



