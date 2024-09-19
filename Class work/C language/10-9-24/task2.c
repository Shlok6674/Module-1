#include<stdio.h>

prime(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;

    }
    if (c==2)
    {
        printf("this is a prime number");
    }
    else
    {
        printf("this is not a prime number");
    }
  
}


main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);
    prime(n);
}