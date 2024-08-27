#include<stdio.h>
main()
{
    int a,b,k,c;
    printf("enter the number: \n");// entry by user
    scanf("%d",&k);

    for(a=1;a<=k;a++)// (initialize,condition,increment)      row
    {
        for(c=1;c<=k-a;c++)// (initialize,condition,increment)       space
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)// (initialize,condition,increment)     columm
        {
            printf(" *");
        }
        printf("\n");
    }
    int i,j,n;
    

    for(i=k;i>=1;i--)// (initialize,condition,increment)      row
    {
        for(n=1;n<=k-i;n++)// (initialize,condition,increment)       space
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