#include<stdio.h>
#include<math.h>
void main()
{
    float sideOne,sideTwo,sideThree,s,area;
    printf("Enter the length of three sides of triangle\n");
    scanf("%f%f%f",&sideOne,&sideTwo,&sideThree);
    s=(sideOne+sideTwo+sideThree)/2;
    area=sqrt(s*(s-sideOne)*(s-sideTwo)*(s-sideThree));
    printf("Area of triangle:%f",area);
}    





    
          
          
          
          
     

    
             
          
         
