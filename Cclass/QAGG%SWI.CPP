#include <stdio.h>
#include <conio.h>
void main()
{
int a;clrscr();
printf("Enter the aggregate percentage");
printf("\nPress 1 for %>=90 \n2 for 80<=%<=89\n3 for 70<=%<=79\n4 for 60<=%<=69\n");
scanf("%d",&a);
printf("Stream assigned is ");
switch(a)
{
case 1:
printf("Science with computer");break;

case 2:
printf("Science with hindi");break;

case 3:
printf("Commerce with computer");break;

case 4:
printf("Commerce with hindi");break;
default:
printf("Value given is invalid");break;
}
getch();
}