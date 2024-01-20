//INSURANCE COMPANY
#include<stdio.h>
#include<conio.h>
void main()
{
int age,prm,plmt;
char g,lives,h;
clrscr();
printf("Enter the age,health condition,lives in and gender:");
scanf("%d,%c,%c,%c",&age,&h,&lives,&g);
if (age==25||age==35&&h=='E'&&lives=='C'&&g=='M'){
printf("The person is insured");
printf("The premium rate is Rs.4 per thousand \nThe maximum amount he/she can insure is Rs. 2Lakh");
}
else if(age==25||age==35&&h=='E'&&lives=='C'&&g=='F')
{
printf("The person is insured");
printf("The premium rate is Rs.3 per thousand \nThe maximum amount he/she can insure is Rs.1Lakh");
}
else if(age==25||age==35&&h=='P'&&lives=='V'&&g=='M')
{
printf("The person is insured");
printf("The premium rate is Rs.6 per thousand \nThe maximum amount he/she can insure is Rs.10,000");
}
else
{printf("The person is not insured");}
getch();
return 0;
}