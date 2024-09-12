#include<stdio.h>
main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);
    fact(n);
}

fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial: %d",fact);
}