#include <stdio.h>

int fibonacci(int n) {
    if(n <= 0) {
        printf("Input should be a positive integer.\n");
        return -1;
    } else if(n == 1) {
        return 0;
    } else if(n == 2) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

void print_fibonacci_series(int n) {
    for(int i = 1; i <= n; i++) {
        printf("%d, ", fibonacci(i));
    }
}

int main() {
    print_fibonacci_series(6);
    return 0;
}
