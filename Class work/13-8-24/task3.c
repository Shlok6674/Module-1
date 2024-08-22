#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("The given number is Even");
    }
    else
    {
        printf("The given number is Odd");
    }
}