#include<stdio.h>
add()
{
    int a,b;

    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);

    return a+b;
}

fact()
{
    int i,n,fact=1;
    printf("Enter n :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    return fact;
}

main()
{
    
    printf("\n%d",add());
    printf("\n%d",fact());
}