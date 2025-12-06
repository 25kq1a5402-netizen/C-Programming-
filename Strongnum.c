#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,i,fact,sum=0,temp;
clrscr();
printf("Enter n value:");
scanf("%d",&n);
temp=n;
while(n>0)
{
rem=n%10;
fact=1;
for(i=1;i<=rem;i++)
{
fact=fact*i;
}
sum+=fact;
n=n/10;
}
if(temp==sum)
{
printf("The given number is Strong number");
}
else
{
printf("The given number is not a Strong number");
}
getch();
}



    
          
          
          
          
     

    
             
          
         
