#include<stdio.h>
//Function to check if a number is even or odd 
void checkEvenOdd(int num){
     if(num%2==0){
        printf("%d is an even number.\n",num);
        }
        else
        {
        printf("%d is an odd number.\n",num);
        }
}
int main(){
   int number;
   
   //prompt the user to enter a number
   printf("Enter an integer:");
   scanf("%d",&number);
   
   //Call the function to check and print if the number is even or odd
   checkEvenOdd(number);
   
   return 0;
}   

    
             
          
         
