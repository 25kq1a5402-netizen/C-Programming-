#include<stdio.h>
#include<conio.h>
void main()
{
int N,i,j,count=0;
clrscr();
printf("Enter N value:");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
count=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
count+=1;
}
}
if(count==2)
{
printf("%d",i);
}
}
getch();
}





    
          
          
          
          
     

    
             
          
         
