#include<stdio.h>
union Ok{
    int a[5],i,j,n;
}s1,s2,s3,s4;

main()
{
    for(s2.i=0;s2.i<5;s2.i++)
    {
        printf("Enter the number 1 :");
        scanf("%d",&s1.a[s2.i]);
    }

    for(s2.i=0;s2.i<5;s2.i++)
    {
        for(s3.j=s2.i+1;s3.j<5;s3.j++)
        {
            if(s1.a[s2.i]>s1.a[s3.j])
            {
                s4.n=s1.a[s2.i];
                s1.a[s2.i]=s1.a[s3.j];
                s1.a[s3.j]=s4.n;
            }
        }
    }
    for(s2.i=0;s2.i<5;s2.i++)
    {
         printf("\n%d",s1.a[s2.i]);   
    }  
}
