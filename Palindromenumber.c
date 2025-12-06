#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev=0,temp;
clrscr();
printf("Enter n value:");
scanf("%d",&n);
temp=n;
while(n>0)
{
rev=rev*10+(n%10);
n=n/10;
}
if(rev==temp)
{
printf("The given number is palindrome");
}
else
{
printf("The given number is not palindrome");
}
getch();
}





    
          
          
          
          
     

    
             
          
         
