#include<stdio.h>
#include<string.h>
main()
{
    char a[10];
    int i,len=0;

    printf("Enter name : ");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        len++;
    }
    printf("Length of string is : %d",len);
}