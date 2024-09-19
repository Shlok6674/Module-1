#include<stdio.h>
main()
{
    int ch;
    while(1)
    {
    printf("\npress 1 for Factorial");
    printf("\npress 2 for Addition");
    printf("\npress 3 for Ascending order");
    printf("\npress 4 for Exit");

    printf("\nEnter the choice:");
    scanf("%d",&ch);

    if(ch==1)
    {
        int n;

         printf("Enter the number: ");
         scanf("%d", &n);
         fact(n);
    }
    else if(ch==2)
    {
        int a,b;
         printf("Enter the number: ");
         scanf("%d", &a);
        printf("Enter the number: ");
         scanf("%d", &b);
        add(a,b);
    }
    else if(ch==3)
    {
        asc();
    }
    else if(ch==4)
    {
        printf("\nThank you!!");
        break;
    }
    else
    {
        printf("\nInvalid choice");
        break;
    }
    }
}

fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial: %d",fact);
}
add(int a,int b)
{
    printf("Addition of numbers: %d",a+b);
}
asc()
{
    int a[5],i,n,j;
    for(i=0;i<5;i++)
    {
         printf("Enter the number");
         scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                n=a[i];
                a[i]=a[j];
                a[j]=n;
            }
        }
    }
    for(i=0;i<5;i++)
    {
         printf("\n%d",a[i]);   
    }  
}