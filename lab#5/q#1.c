// Write a program to create a new text file and write some text into it. Open the file in
// append mode and add more text to it. Read the contents of the file and display them on
// the console.

#include <stdio.h>
int main()
{
    // creating new file
    FILE *fptr;
    fptr = fopen("lab6.txt", "w");
    if (fptr != NULL)
    {
        fprintf(fptr, "hey, this is lab#5");
    }
    else
    {
        printf("Unable to open the file");
    }
    fclose(fptr);

    // appending in an existing file
    FILE *existingFile;
    existingFile = fopen("lab6.txt", "a");
    fprintf(existingFile, "\nadding q#1 in lab#5");
    fclose(existingFile);

    // reading from a file
    FILE *readFile;
    char mystring[200];
    readFile = fopen("lab6.txt", "r");
    fgets(mystring, 100, readFile);
    printf("%s", mystring);
    fclose(readFile);

    return 0;
}