#include<stdio.h>
#include<conio.h> 
int main()
{
   int num, i, isPrime = 1; 
   printf("Enter  a number: ");
   scanf("%d",&num);
   if (num <= 1)
isprime=0;
{
   }
   else
{
          for (i = 2; i * i <= num; i++)
{
             if (num % i == 0)
{
isprime=0;  
                 break;  
             }
           }
    }
    if (isPrime)
        printf("%d is a PRIME number.\n",num);
    else
        printf("%d is NOT a prime number.\n", num);
    return 0;
}        
          
                      
          
  



    
          
          
          
          
     

    
             
          
         
