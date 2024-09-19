#include<stdio.h>
main()
{
    int i,n;


    printf("Enter the number :  ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("\n%d ",i);
        if (i==n/2)
        {
            break;
        }   
    }
}