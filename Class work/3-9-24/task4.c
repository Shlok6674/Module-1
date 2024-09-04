#include<stdio.h>
main()
{
    int a[5],b[5],c[5],i;

    for(i=0;i<5;i++)
    {
        printf("enter the number a =");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("enter the number b =");
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
       c[i]=a[i]+b[i];
    }
    for(i=0;i<5;i++)
    {
     printf("\nenter the number c = %d",c[i]);
    }
        

}