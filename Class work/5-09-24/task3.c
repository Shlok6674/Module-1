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

    int b[n][m];
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter the number:");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }    
    printf("\n");

    int c[i][j];

   for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
        printf("%d\t",c[i][j]);
    }printf("\n");
   }


}