#include <stdio.h>

// Functions
// Function declaration
int add(int a, int b);

void functionExample() {
    int num1 = 10, num2 = 5, result;

    result = add(num1, num2);

    printf("Sum: %d\n", result);
}

// Function definition
int add(int a, int b) {
    return a + b;
}