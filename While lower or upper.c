#include<stdio.h>
void main()
{
    int lower,upper;
    scanf("%d%d",&lower,&upper);
    lower=10;
    while(lower<upper)
    {
        printf("%d ",lower);
        lower++;
    }
    printf("%d",lower);
}
