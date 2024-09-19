#include<stdio.h>
struct Ok{
    int a[5],i,j,n;
}s1;

main()
{
    for(s1.i=0;s1.i<5;s1.i++)
    {
        printf("Enter the number %d :",s1.i+1);
        scanf("%d",&s1.a[s1.i]);
    }

    for(s1.i=0;s1.i<5;s1.i++)
    {
        for(s1.j=s1.i+1;s1.j<5;s1.j++)
        {
            if(s1.a[s1.i]<s1.a[s1.j])
            {
                s1.n=s1.a[s1.i];
                s1.a[s1.i]=s1.a[s1.j];
                s1.a[s1.j]=s1.n;
            }
        }
    }
    for(s1.i=0;s1.i<5;s1.i++)
    {
         printf("\n%d",s1.a[s1.i]);   
    }  
}