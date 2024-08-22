#include<stdio.h>

main()
{
    int n,sum=0,i=1;// initialize

    printf("Enter the Number :");
    scanf("%d",&n);

    while(i<=n)// condition
    {
        sum=sum+i;// formula
        i++;// it commands for incrementing number [increment]
    }
    printf("Sum of number: %d ",sum);
}