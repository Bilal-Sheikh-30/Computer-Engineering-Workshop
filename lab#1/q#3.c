#include <stdio.h>
int main()
{
    float height;
    printf("Enter height in cm: ");
    scanf("%f", &height);
    if (height < 150)
    {
        printf("Dwarf");
    }
    else if (height == 150)
    {
        printf("Average");
    }
    else if (height >= 165)
    {
        printf("Tall");
    }
    return 0;
}