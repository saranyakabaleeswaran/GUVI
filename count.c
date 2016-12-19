#include<stdio.h>
int main()
{
int n,count=0,t;
scanf("%d",&n);
t=n;
while(n>0)
{
count++;
n=n/10;
}
printf("no of integers in %d:%d\n",t,count);
return 0;
}
