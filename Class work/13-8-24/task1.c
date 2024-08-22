#include<stdio.h>
void main()
{
    int n,n1;

    printf("Enter the number 1: ");
    scanf("%d",&n);
    printf("Enter the number 2: ");
    scanf("%d",&n1);

    if(n>n1)
    {
        printf("Number 1 is greatest");
    }
    else
    {
        printf("Number 2 is greatest");

    }
}