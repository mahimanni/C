#include <stdio.h>
#include <conio.h>
void main()
{
int a,b,c; clrscr();
printf("Enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("The greatest no is:%d",a);
else if((b>a)&&(b>c))
printf("The greatest no is:%d",b);
else if((c>a)&&(c>b))
printf("The greatest no is:%d",c);
getch();
}