#include<stdio.h>

fact()
{
    int i,n,m=1;

    printf("Enter the number :");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        m=m*i;
    }
    printf("result of factorial:%d",m);
}

main()
{
    fact();
}