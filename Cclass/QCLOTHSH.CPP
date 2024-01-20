//progaram is to calculate simple interest
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,TC,d,amt,c;
 clrscr();
 printf("\n 1 for TC<2000\n 2 for 2001<=TC<=5000 \n 3 for 5001<=TC<=10000\n 4 for TC>10000");
 scanf("%d",&c);
 printf("Enter the total cost");
 scanf("%d",&TC);
 switch(c)
 {
 case 1:
 {
 d=0.05*TC;
 a=TC-d;
 break;
 }
 case 2:
 {
 d=0.25*TC;
 a=TC-d;
 break;
 }
 case 3:
 {
 d=0.35*TC;
 a=TC-d;
 break;
 }
 case 4:
 {
 d=0.5*TC;
 a=TC-d;
 break;
 }
 default:
 {
 printf("Wrong Choice");
 break;
 }
 }
 printf("Amount is%d",a);
 getch();
 }




