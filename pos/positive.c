#include<stdio.h>
int main()
{
  int num;
  scanf("%d",&num);
  if(num<0)
  printf("The number is negative");
  else if(num>0)
  printf("The number is positive");
  else
  printf("The number is zero");
  return 0;
 } 
