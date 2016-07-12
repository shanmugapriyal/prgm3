#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
scanf("%d,%d,%d",&a,&b,&c);
if(a>b&&a>c)
printf("a greater");
else 
if(b>c&&b>a)
printf("b greater");
else
printf("c greater");
}
