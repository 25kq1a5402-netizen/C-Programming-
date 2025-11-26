#include<stdio.h>
int calculateSum(int n){
     int sum=0;
     for(int i=1;i<=n;i++){
          sum+=i;
     }
     return sum;
}
int main(){
   int n,result;
   printf("Enter a positive integer (n):");
   scanf("%d",&n);
   result=calculateSum(n);
   printf("The sum of numbers from 1 to %d is: %d\n",n,result); 
   return 0;
}     
          
     

    
             
          
         
