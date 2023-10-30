#include <stdio.h>

struct unit
{
    int feet;
    int inch;
};
int main()
{
    int feet1;
    int inch1;
    int feet2;
    int inch2;
    printf("Enter feet value for 1st no: ");
    scanf("%d", &feet1);
    printf("Enter inch value for 1st no: ");
    scanf("%d", &inch1);
    printf("Enter feet value for 2nd no: ");
    scanf("%d", &feet2);
    printf("Enter inch value for 2nd no: ");
    scanf("%d", &inch2);
    struct unit value1;
    value1.feet = feet1;
    value1.inch = inch1;
    struct unit value2;
    value2.feet = feet2;
    value2.inch = inch2;
    printf("sum of two values is: %d'%d\"", value1.feet + value2.feet, value1.inch + value2.inch);
    return 0;
}