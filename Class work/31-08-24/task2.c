#include<stdio.h>
main()
{
    int ch, bill, bill1, bill2;
    printf("\n*****Welcome to restarant*****\n");

    while(1)
    {
        printf("\npress 1 for Dabeli -> 20rs");
        printf("\npress 2 for Vadapav -> 40rs");
        printf("\npress 3 for Manchurian -> 60rs");
        printf("\npress 4 for Bill");
        printf("\npress 5 for Exit");

        printf("\n Enter your Choice : ");
        scanf("%d",&ch);

        if(ch==1)
        {
            printf("*****Dabeli*****");
            int quan;
            printf("\nEnter Quantity: ");
            scanf("%d",&quan);

            bill=quan*20;
        }
        else if(ch==2)
        {
            printf("*****Vadapav*****");
            int quan1;
            printf("\nEnter Quantity: ");
            scanf("%d",&quan1);

            bill1=quan1*40;
        }
        else if(ch==3)
        {
            printf("*****Manchurian*****");
            int quan2;
            printf("\nEnter Quantity: ");
            scanf("%d",&quan2);

            bill2=quan2*60;
        }
        else if(ch==4)
        {
            int total=bill+bill1+bill2;
            printf("\n*****Amount to be paid is : %d*****\n",total);
            break;
        }
        else if(ch==5)
        {
            printf("\n*****Thank you for visiting us*****\n");
            break;
        }
        else
        {
            printf("\nInvalid choice");
        }
    }
    
}
