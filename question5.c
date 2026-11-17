
#include <stdio.h>

int main()
{
    FILE *fptr;

    int rollNo, marks;
    char name[50];

    fptr = fopen("marks.txt", "r");

    if (fptr == NULL)
    {
        printf("Error: File Not Found!");
    }
    else
    {
        printf("\n========================================\n");
        printf("           STUDENT REPORT CARD          \n");
        printf("========================================\n");

        printf("%-15s %-20s %-10s\n", "Roll No", "Name", "Marks");

        printf("----------------------------------------\n");

        while (fscanf(fptr, "%d %49s %d", &rollNo, name, &marks) == 3)
        {
            printf("%-15d %-20s %-10d\n", rollNo, name, marks);
        }

        printf("========================================\n");

        fclose(fptr);
    }

    return 0;
}
