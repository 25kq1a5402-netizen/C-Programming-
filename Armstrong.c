#include<stdio.h>
#include<conio.h>
void main()
{
      int num,rem,sum=0,temp;
      clrscr();
      printf("enter a number:\n");
      scanf("%d",&num);
      {
              rem=num%10;
              sum=sum+(rem*rem*rem);
              num=num/10;
      }
      if(temp==sum)
      printf("%d is armstrong number",temp);
      else
      printf("%d is not armstrong number",temp);        
      getch();
}          
                      
          
  



    
          
          
          
          
     

    
             
          
         
