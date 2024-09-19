#include<stdio.h>

main()
{
    int n,fact=1,i=1;// initialize

    printf("Enter the Number :");
    scanf("%d",&n);

    while(i<=n)// condition
    {
        fact=fact*i;// formula
        i++;// it commands for incrementing number [increment]
    }
    printf("Mutiplication of number: %d ",fact);
}