#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Input the character");
scanf("%c",&c);

switch(c)
{
case('a'):
case('A'):
case('e'):
case('E'):
case('i'):
case('I'):
case('o'):
case('O'):
case('u'):
case('U'):
{
printf("Character is vowel"); break;}
default:
printf("Character is consonant");
}
getch();
}
