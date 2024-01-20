#include <stdio.h>
#include <conio.h>
void main()
{
char c; int v;
printf("Enter any character");
scanf("%c",&c);
v=(int)c;
if((v>=65)&&(v<=90))
printf("The character entered is a capital letter");
else if((v>=97)&&(v<=122))
printf("The character entered is a small letter");
else if((v>=48)&&(v<=57))
printf("The character entered is a digit");
else
printf("The character entered is a special character");
getch();
clrscr();}
