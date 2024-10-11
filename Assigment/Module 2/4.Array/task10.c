//show difference between Structure and Union.
#include <stdio.h>

struct Student 
{
    int id;
    char name[50];
    float marks;
};

union Data 
{
    int integer;
    float decimal;
    char character;
};

void displayStruct(struct Student stu) 
{
    printf("Student ID: %d\n", stu.id);
    printf("Student Name: %s\n", stu.name);
    printf("Student Marks: %.2f\n", stu.marks);
}

void displayUnion(union Data data) 
{
    printf("Union Integer: %d\n", data.integer);
    printf("Union Decimal: %.2f\n", data.decimal);
    printf("Union Character: %c\n", data.character);
}

main() 
{
    struct Student student1;
    union Data data1;

    printf("Enter Student ID: ");
    scanf("%d", &student1.id);
    printf("Enter Student Name: ");
    scanf("%s", student1.name);
    printf("Enter Student Marks: ");
    scanf("%f", &student1.marks);

    displayStruct(student1);

    data1.integer = 5;
    printf("\nUsing Union:\n");
    printf("Assigning Integer: %1d\n", data1.integer);
    data1.decimal = 3.14;
    printf("Assigning Decimal: %.2f\n", data1.decimal);
    data1.character = 'A';
    printf("Assigning Character: %c\n", data1.character);
    
    displayUnion(data1);   
}
