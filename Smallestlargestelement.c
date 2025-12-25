#include<stdio.h>
int main()
{
     int a[6]={12,5,10,9,7,6};
     int temp;
     int i,j;
     printf("Before Swapping ");
     for(i=0;i<6;i++)
     {
       printf("%d ",a[i]);
     }
     for(i=0;i<6;i++)
     {
         for(j=i+1;j<6;j++)
         {
              if(a[i]>a[j])
              {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
              }    
         }  
    }
    printf("\nAfter Sorting ");
    for(i=0;i<6;i++)
    {
         printf("%d ",a[i]);
    }
    return 0;
}           
          
          
          
          
     

    
             
          
         
