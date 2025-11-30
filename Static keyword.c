#include<stdio.h>
void main()
{
    int i;
    void fun();
    for(i=1;i<=5;i++)
    fun();
}
void fun()
{
    static int cnt=0;
    cnt++;
    printf("\ncnt=%d",cnt);
}    
     
      
     
     
                     
         
          
                      
          
  



    
          
          
          
          
     

    
             
          
         
