
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;

    char username[50];
    char password[50];

    char savedUser[50];
    char savedPassword[50];

    printf("Enter Username: ");
    scanf("%49s", username);

    printf("Enter Password: ");
    scanf("%49s", password);

    fptr = fopen("credentials.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening credentials file!");
    }
    else
    {
        if (fscanf(fptr, "%49s %49s", savedUser, savedPassword) == 2)
        {
            if (strcmp(password, savedPassword) == 0)
            {
                printf("\nAccess Granted!");
            }
            else
            {
                printf("\nAccess Denied!");
            }
        }
        else
        {
            printf("Invalid credentials file!");
        }

        fclose(fptr);
    }

    return 0;
}
