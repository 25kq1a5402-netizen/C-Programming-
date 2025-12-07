#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
     float principle,rate,time,ci;
     clrscr();
     printf("\n enter principle amount:");
     scanf("%f",&principle);
     printf("\n enter time:");
     scanf("%f",&time);
     printf("\n enter rate");
     scanf("%f",&rate);
     ci=principle*(pow((1+rate/100),time));
     printf("compound interest=%f",ci);
     getch();
}     





    
          
          
          
          
     

    
             
          
         
