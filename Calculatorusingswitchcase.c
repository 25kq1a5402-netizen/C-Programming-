#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
     char ch;
     int a,b,result;
     printf("enter an operator(+,-,*,/):\n");
     scanf("%c",&ch);
     printf("enter two operands:\n");
     scanf("%d%d",&a,&b);
     switch(ch)
     {
            case'+':
                 result=a+b;
                 break;
             case'-':
                 result=a-b;
                 break;
             case'*':
                 result=a*b;
                 break;
             case'/':
                 result=a/b;
                 break;
      }
      printf("result=%d",result);
      getch();
}                 




    
          
          
          
          
     

    
             
          
         
