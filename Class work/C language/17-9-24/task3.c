#include<stdio.h>
struct Ok{
    int a,b;
}s1;

main()
{
    printf("Enter the number 1 :");
    scanf("%d",&s1.a);
    printf("Enter the number 2 :");
    scanf("%d",&s1.b);

    printf("Addition :%d",s1.a+s1.b);

}