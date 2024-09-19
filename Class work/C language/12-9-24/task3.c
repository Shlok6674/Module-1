#include<stdio.h>
add(int a,int b)
{
    
    return a+b;
}

fact(int n)
{
    int i,fact=1;
    

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    return fact;
}

main()
{
    int a,b;
    
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);

   int n;
    
    printf("Enter n :");
    scanf("%d",&n);
    printf("\n%d",add(a,b));
    printf("\n%d",fact(n));
}