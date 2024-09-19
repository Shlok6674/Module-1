#include<stdio.h>
main()
{
    int a[5],i,sum=0;

    for(i=0;i<5;i++)
    {
        printf("Enter the number = ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("sum =%d",sum);

}