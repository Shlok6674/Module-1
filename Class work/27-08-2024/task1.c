#include<stdio.h>
main()
{
    int n,i,c=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}