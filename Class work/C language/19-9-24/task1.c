#include<stdio.h>
int main()
{
    FILE* fptr;

    fptr =fopen ("test1.txt","w");
    fprintf(fptr,"\n Hello this is write method ");
    fclose(fptr);
}