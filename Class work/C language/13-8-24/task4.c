#include<stdio.h>

int main()
{
    int a;

    printf("Temprature: ");
    scanf("%d",&a);

    if(a<=10)
    {
        printf("Freeze weather");
    }
    else if(a<=20)
    {
        printf("Cold weather");
    }
    else if(a<=30)
    {
        printf("Normal weather");
    }
    else
    {
        printf("Hot weather");
    }
}