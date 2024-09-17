#include<stdio.h>
#include<string.h>

main()
{
    char a[20];
    char b[20];


    printf("Enter thre string 1: ");
    gets(a);
    printf("Enter thre string 2: ");
    gets(b);

    int result = strcmp(a,b);

    printf("String comparission :%d",result);
}