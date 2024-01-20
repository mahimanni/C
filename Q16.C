#include <stdio.h>
#include <conio.h>
void main()
{
long int i,r;
clrscr();
printf("Enter the income of the individual");
scanf("%lld",&i);
if(i<=50000)
r=0;
else if((i>50000)&&(i<=60000))
r=0.1*(i-50000);
else if((i>60000)&&(i<=150000))
r=1000+(0.2*(i-60000));
else if(i>150000)
r=19000+(0.3*(i-150000));

printf("Income tax:%lld",r);
getch();
}
