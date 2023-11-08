#include "stdio.h"
void swapValues(int *var1, int *var2)
{
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
    printf("value of a: %d\n", *var1);
    printf("value of b: %d", *var2);
}

int main()
{
    int a = 10;
    int b = 30;
    swapValues(&a, &b);
    return 0;
}