#include<stdio.h>
void main()
{
    int a,b,c;
    printf ("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b)
         if(a>=c)
             printf("a is bigger");
        else
             printf("b is bigger");
    else
        if(b>=c)
             printf("b is bigger");
        else
             printf("c is bigger");
}          
