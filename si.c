#include<stdio.h>
int main()
{
  int p,n;
  float r,simple interest;
  scanf("%d %d %f",&p,&n,&r);
  simple interest=(p*n*r)/100;
  printf("%f",simple interest);
  return 0;
  }
