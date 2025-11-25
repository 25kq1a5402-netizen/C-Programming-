#include<stdio.h>
void main()
{
    char ch;
    printf("Enter char:");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("Given char is vowel");
    break;
    default:
    printf("Given char is constant");
    }
}
