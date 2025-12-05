#include<stdio.h>
#include<conio.h>
void main()
{
int N,a=0,b=1,c,i;
clrscr();
printf("Enter N value:");
scanf("%d",&N);
printf("%d %d",a,b);
for(i=0;i<N;i++)
{
        c=a+b;
if(c<=N)
{
printf("%d ",c);
        a=b;
        b=c;
     }   
  }                    
getch();
}          
  



    
          
          
          
          
     

    
             
          
         
