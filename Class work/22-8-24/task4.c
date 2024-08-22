#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("enter the number: \n");// entry by user
    scanf("%d",&k);

    for(i=1;i<=k;i++)// (initialize,condition,increment)      row
    {
        for(n=1;n<=k-i;n++)// (initialize,condition,increment)       space
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)// (initialize,condition,increment)     columm
        {
            printf("*");
        }
        printf("\n");
    }
}