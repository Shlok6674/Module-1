#include<stdio.h>
#include<string.h>

main()
{
    char a[20];
    char b[20];

    int i,j;
    int m=0,n=0;

    printf("Enter the string 1: ");
    gets(a);
    printf("Enter the string 2: ");
    gets(b);

    for(i=0;a[i]!='\0';i++)
    {
        m=m+a[i];
    }
    for(j=0;b[j]!='\0';j++)
    {
        n=n+b[j];
    }
    printf("\nValue of string 1:%d",m);
    printf("\nValue of string 2:%d",n);

    if (m==n)
    {
        printf("\nBoth string are equal");
    }
    else if(m>n)
    {
        printf("\nString 1 is greater");
    }
    else
    {
        printf("\nString 2 is greater");
    }
}