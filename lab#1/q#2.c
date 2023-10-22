#include <stdio.h>
int main()
{
    float length;
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    float width;
    printf("Enter width of rectangle: ");
    scanf("%f", &width);
    printf("Perimeter: %.2f units\nArea is: %.2f units", 2 * (length + width), length * width);
    return 0;
}