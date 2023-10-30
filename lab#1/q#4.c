#include <stdio.h>

void convert_to_binary(int n) {
    if (n / 2 != 0) {
        convert_to_binary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Binary of %d is: ", num);
    convert_to_binary(num);
    printf("\n");
    return 0;
}
