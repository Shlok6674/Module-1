#include<stdio.h>
main()
{
    int i,a[5],j,temp;
    for(i=0;i<5;i++)
    {
        printf("Enter the number = ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("\nAscending order of number = %d ",a[i]);
    }
}