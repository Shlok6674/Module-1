#include<stdio.h>
main()
{
    char a[20],b[20];
    printf("Enter string: ");
    gets(a);
    printf("Enter string: ");
    gets(b);

    printf("Merge string ids : %s ",strcat(a,b));// concatenate
   

}