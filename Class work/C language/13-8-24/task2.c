#include<stdio.h>
void main()
{
    int a;
    
    printf("Enter the Number:");
    scanf("%d",&a);

    if(a>0)
    {
        printf("The number is positive");
    }
    else if(a==0)
    {
        printf("The number is nor negative or positive");
    }
    else
    {
        printf("The number is negative");
    }
}