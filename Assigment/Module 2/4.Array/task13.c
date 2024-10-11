//accept 5 students name and store it in array
#include <stdio.h>

acceptNames(char names[][50], int count) 
{
    for (int i = 0; i < count; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);
    }
}

displayNames(char names[][50], int count) 
{
    printf("Student Names:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", names[i]);
    }
}

main() 
{
    char studentNames[5][50];

    acceptNames(studentNames, 5);
    displayNames(studentNames, 5);

    
}
