#include<stdio.h>
#include<string.h>

int main()
{
    char review[100];
    char new[100] = "";
    char *pos;
    printf("Enter Your Feedback \n");
    fgets(review, sizeof(review), stdin);
    printf("Total Characters are %d \n", (int) strlen(review));
    if (strstr(review, "good") != NULL)
    {
        printf("Positive sentiment detected.\n");
    }

    if (strstr(review, "bad") != NULL)
    {
        printf("Negative sentiment detected.\n");

        pos = strstr(review, "bad");

        strncat(new, review, pos - review);
        strcat(new, "not good");
        strcat(new, pos + 3);

        strcpy(review, new);

        printf("Updated review: %s", review);
    }
    else
    {
        printf("No negative sentiment detected.\n");
        printf("Original review: %s", review);
    }

    return 0;
}
