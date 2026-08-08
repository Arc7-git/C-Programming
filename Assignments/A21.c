// Write a C program to copy contents of one file to another using file handling.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *source, *target;
    char ch;

    source = fopen("source.txt", "r");

    if (source == NULL)
    {
        printf("Error opening source file!\n");
        exit(1);
    }
    target = fopen("destination.txt", "w");

    if (target == NULL)
    {
        printf("Error opening target file!\n");
        fclose(source);
        exit(1);
    }

        while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, target);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(target);

    return 0;
}