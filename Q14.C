#include <stdio.h>
#include <conio.h>
void main()
{
int a;
char n[15];
clrscr();
printf("Enter the name of the student");
scanf("%s",&n);
gets(n);
printf("%s",n);
puts(n);

printf("Enter the average marks of the student");
scanf("%d",&a);
if(a>=90)
printf("grade is A+");
else if((a>=80)&&(a<90))
printf("grade is A");
else if((a>=70)&&(a<80))
printf("grade is B+");
else if((a>=60)&&(a<70))
printf("grade is B");
else if((a>=50)&&(a<60))
printf("grade is C");
else if(a<50)
printf("FAIL");

getch();
}