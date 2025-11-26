#include<stdio.h>
void reverse(int n)
{
    int r,sum=0;
    int temp=n;
    while(n!=0);
    {
    
        int r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf(" %d",sum);
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    reverse(n);
}    
    
          
          
          
          
     

    
             
          
         
