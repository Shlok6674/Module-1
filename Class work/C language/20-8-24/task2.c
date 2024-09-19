#include<stdio.h>

main()
{
    int n;
    int i=1;

    printf("Enter the number: ");
    scanf("%d",&n); // initialize

    while(i<=n) // condition
    {
        printf("%d\n",i);
        i= i+1; // increment
    }

   
}