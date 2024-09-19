#include<stdio.h>
int main()
{
    FILE* fptr;

    fptr =fopen ("test1.txt","a");
    fprintf(fptr,"\n Hello this is append method ");
    fclose(fptr);
}