#include<stdio.h>
main()
{
    int i,j;
    
    int n,m;
    printf("Enter the no of rows:");
    scanf("%d",&n);
    printf("Enter the no of columms:");
    scanf("%d",&m);

    int a[n][m];
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter the number:");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }


}