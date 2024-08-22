#include<stdio.h>
main()
{
    int i,a;                    // for addition
    printf("enter value of a ");
    scanf("%d",&a);
    

    for(i=1;i<=a;i++)// (initialize,condition,increment)
    {
        printf("%d\n",i);
    }
  
    int b,j;                     // for subraction
    printf("enter value of b \n");
    scanf("%d",&b);

    for(j=b;j>=1;j--)// (initialize,condition,increment)
    {
        printf("%d\n",j);
    }

    int k,c,fact=1;              // for factorial
    printf("enter value of c \n");
    scanf("%d",&c);

    for(k=1;k<=c;k++)// (initialize,condition,increment)

    {
        fact=fact*k;
    }

    printf("Facctorial of number %d",fact);

    
}
