#include<stdio.h>
int main()
{
  int day;
  scanf("%s",&day);
  int n;
  while(n<=7)
  {
  switch(n)
  {
    case 1:while(Monday)
              printf("true");
              break;
    case 2:while(Tuesday)
                printf("true");
                break;
    case 3:while(Wednesday)
                printf("true");
                break;
     case 4:while(thursday)
                printf("true");
                break;
    case 5:while(friday)
                printf("true");
                break;
    case 6:while(saturday)
                printf("false");
                break;
     case 7:while(sunday)
                printf("false");
                break;
      default:
           printf("no comments");
           }
           }
        return 0;
     }   
