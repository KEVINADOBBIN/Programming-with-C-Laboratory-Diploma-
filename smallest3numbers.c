#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter 3 numbers: \n");
scanf("%d%d%d",&a,&b,&c);
If(a<=b && a<=c)
printf("\n Smallest number = %d",a);
else if(b>=a&& b>=c)
printf("\n Smallest number = %d",b);
else
printf("\n Smallest number = %d",c);
getch();
}
