#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "google";
    char *ptr = &name;
    for (int i = (strlen(name) - 1); i > -1; i--)
    {
        printf("%c", *(ptr + i));
    }
    return 0;
}