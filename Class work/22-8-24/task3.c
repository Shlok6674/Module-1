#include<stdio.h>
main()
{
    int i,j,k;
    printf("enter the number: \n");// entry by user
    scanf("%d",&k);

    for(i=1;i<=k;i++)// (initialize,condition,increment)
    {
        for(j=1;j<=i;j++)// (initialize,condition,increment)
        {
            printf("*");
        }
        printf("\n");
    }
}