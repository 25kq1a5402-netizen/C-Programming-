#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,i=1,gcd=1;
clrscr();
printf("Enter number1:");
scanf("%d",&n1);
printf("Enter number2:");
scanf("%d",&n2);
while(i<=n1)
{
if(n1%i==0&&n2%i==0)
{
gcd=i;
}
i+=1;
}
printf("GCD:%d\n",gcd);
printf("LCM:%d",(n1*n2)/gcd);
getch();
}





    
          
          
          
          
     

    
             
          
         
