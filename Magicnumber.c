#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,sum=0,temp,rev=0;
clrscr();
printf("Enter n value:");
scanf("%d",&n);
temp=n;
while(temp>0)
{
rev=rev*10+temp%10;
temp/=10;
}
if(rev*sum==n)
{
printf("The given number is magic number");
}
else
{
printf("The given number is not a magic number");
}
getch();
}




    
          
          
          
          
     

    
             
          
         
