#include<stdio.h>
int main()
{

 int array[100], size, i, j;
  
 
 scanf("%d", &size);
 printf("Enter %d numbers\n", size);
  
 for(i = 0; i < size; i++){
  scanf("%d", &array[i]);
 }
  

 for(i = 0; i < size; i++) {
  for (j=0; j<i; j++){
      if (array[i] == array[j])
       break;
       }
      
     if (i == j){
   
      printf("%d ", array[i]);
  }
 }
  
 getch();
 return 0;
}
