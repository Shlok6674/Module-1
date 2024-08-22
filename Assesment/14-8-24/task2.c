#include<stdio.h>

int main()
{
    int n;   
    float a,b;
    printf("-----------Menu----------");
    printf("\n1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nEnter the number1: ");
    scanf("%f",&a);

    printf("\nEnter the number2: ");
    scanf("%f",&b);

    printf("\nEnter the number[1,2,3,4]; ");
    scanf("%d",&n);


    switch (n)
    {
    case 1:
        printf("Addition = %.2f",a+b);
        break;
    case 2:
        printf("Subraction = %.2f",a-b);
        break;
    case 3:
        printf("Multiplication = %.2f",a*b);
        break;
    case 4:
       if(b!= 0)
                printf("Division = %.2f\n",a/b);
        else
                printf("Error: Division by zero!\n");
    default:
        break;
    }

}