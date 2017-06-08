#include<stdio.h>
#include<conio.h>
void main()
{
int no1,no2,temp,temp1,temp2;
clrscr();

scanf("%d%d",&no1,&no2);
t1=no1;
t2=no2;
while(no2!=0)
{
temp=no1%no2;
no1=no2;
no2=temp;
}
if(no1==1)
printf(" co-prime");
else
printf(" not co-prime");
getch();
}
