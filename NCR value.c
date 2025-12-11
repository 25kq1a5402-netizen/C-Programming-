#include<stdio.h>
int fact(int z);
void main()
{
   int n,r,nCr;
   printf("Enter the value of n and r?");
   scanf("%d %d",&n,&r);
   nCr=fact(n)/(fact(r)*fact(n-r));
   printf("\nnCr=%d",nCr);
}
    int fact(int z)
    {
      int f=1,i;
      if(z==0)
      {
        return(f);
      }  
       else
      { 
          for(i=1;i<=z;i++)
      { 
          f=f*i;
      } 
      } 
       return(f);
}                 


    
          
          
          
          
     

    
             
          
         
