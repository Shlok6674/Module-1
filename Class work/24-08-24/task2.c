#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("enter the number: \n");// entry by user
    scanf("%d",&n);

    for(i=n;i>=1;i--)// (initialize,condition,increment)      row
    {
        for(k=1;k<=n-i;k++)// (initialize,condition,increment)       space
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)// (initialize,condition,increment)     columm
        {
            printf(" *");
        }
        printf("\n");
    }
}