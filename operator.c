#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c; // variables
a=10;
b=5;
c=a+b;
if(a==10||b==6) // OR operator
printf("%d",c);
if(a==10&&b==5) // AND operator
printf("%d",c);
if(a!=b) // NOT operator
printf("%d",c);
getch();
}
