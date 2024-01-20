#include <stdio.h>
#include <conio.h>
void main()
{
int a,b; clrscr();
printf("Enter two numbers");
scanf("%d%d",&a,&b);
if(a>b)
printf("The greater number is:%d",a);
else
printf("The greater number is:%d",b);
getch();
}
