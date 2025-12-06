#include<stdio.h>
#include<math.h>
int main()
{
  int l,h,sum,rem,temp,c,i;
  scanf("%d%d",&l,&h);
  for(i=l+1;i<=h;i++)
  {
      temp=i;
      c=0;
      while(temp!=0)
  {
      rem=temp%10;
      sum+=pow(rem,c);
      temp=(int)(temp/10);
  }
  if(sum==i)
  {
     printf("%d ",i);
     }
  }
  return 0; 
}      





    
          
          
          
          
     

    
             
          
         
