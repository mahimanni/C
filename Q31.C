 #include <stdio.h>
 #include <conio.h>
 void main()
 {
 int a,b,c,p,q,r,x,y,v;   clrscr();
 printf("Enter the value of coefficients of x and y and value of constants for two simultaneous linear equations");
 scanf("%d%d%d%d%d%d",&a,&b,&c,&p,&q,&r);
x=(c*q-b*r)/(a*q-b*p);
y=-(c*p)/(a*q-b*p);
v=a*q-b*p;

if(v==0){
printf("No finite solution");}
else{
printf("Solution of linear equations are:%d",x);
printf("and:%d",y);
}
getch();
}