#include<stdio.h>
void printDigits(int num){
      if (num == 0) {
         printf("0\n");
         return;
      }   
      int digits[10];
      int i = 0;
      while (num > 0) {
          digits[i] = num % 10;
          num /= 10;
          i++;
      }
      printf("Individual digits: ");
      for (int j = i - 1;j >= 0;j--){  
          printf("%d ",digits[j]);
      }
      printf("\n");
}      
          
          
          
          
     

    
             
          
         
