#include <stdio.h>
#include<string.h>
int main() 
{
    char a[100],b[100];
    int i=0;

    printf("Enter a string: ");
    gets(a); 
    while(a[i]!='0')
    {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';
    printf("Copied string: %s\n", b);

    return 0;
}
