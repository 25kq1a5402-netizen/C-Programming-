#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.1416
#define max 150
void main()
{
       int angle;
       float x,y;
       angle=0;
       clrscr();
       printf("angle sin(angle)");
       while(angle<=max)
       {
       x=(pi/max)*angle;
       y=sin(x);
       printf("%d %f",angle,y);
       angle=angle+10;
       }
 }      
       
    

             
          
          
          
          
     

    
             
          
         
