#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long n,esum=0,osum=0,rem;
clrscr();
printf("Enter n value:");
scanf("%ld",&n);
while(n>0)
{
rem=n%10;
if(rem%2==0)
{
esum+=rem;
}
else
{
osum+=rem;
}
n=n/10;
}
printf("%d",abs(esum-osum));
getch();
}




    
          
          
          
          
     

    
             
          
         
