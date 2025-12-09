#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int *ptr=(int*)malloc(3*sizeof(int));
    clrscr();
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr=(int*)realloc(ptr,5*sizeof(int));
    ptr[3]=4;
    ptr[4]=5;
    for(int i=0;i<5;i++)
    {
        printf("%d",ptr[i]);
     }
        free(ptr);
        getch();
     }      


    
          
          
          
          
     

    
             
          
         
