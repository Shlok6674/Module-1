#include <stdio.h>
#include<string.h>
int main() 
{
    char a[100],b[100];
   

    printf("Enter a string: ");
    gets(a); 
   
    strcpy(b,a);

    printf("Copied string: %s\n", b);

    
}
