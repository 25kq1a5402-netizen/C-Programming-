#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
      float a,b,c,r1,r2,d;
      clrscr();
      printf("enter the values of a,b,c:\n");
      scanf("%f%f%f",&a,&b,&c);
      d=b*b-4*a*c;
      if(d>0)
      {
            r1=-b+sqrt(d)/(2*a);
            r2=-b-sqrt(d)/(2*a);
            printf("the real roots=%f%f\n",r2,r2);
      }
      else if(d==0)
      {
            r1=-b/(2*a);
            r2=-b/(2*a);
            printf("roots are equal=%f%f\n",r1,r2);
       }
       else
       {
            printf("roots  imaginary");
        }
        getch();
}                       
            




    
          
          
          
          
     

    
             
          
         
