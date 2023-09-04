
#include <stdbool.h>
#include <stdio.h>
#include "header.h"



// Variables and Data Types
void dataTypes() {
    int age = 25;
    float height = 175.555f;
    char grade = 'A';
    double pi = 3.14159265359;
    short temperature = -10;
    long population = 8000000000L;
    unsigned int count = 100;
    bool isRaining = true;

    printf("Age: %d\n", age);
    printf("Height: %.3f\n", height);
    printf("Grade: %c\n", grade);
    printf("Pi: %.9lf\n", pi);
    printf("Temperature: %d\n", temperature);
    printf("Population: %ld\n", population);
    printf("Count: %u\n", count);
    printf("Is it raining? %s\n", isRaining ? "Yes" : "No");
}

// User Input and Output
void io() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("Sum: %d\n", sum);
}

// Control structures
void ifElse() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}

// Arithmetic, Comparison & Logical Operators
void operators() {
    int num1 = 10;
    int num2 = 5;
    int num3 = 3;

//    + (addition): Adds two numbers.
//    - (subtraction): Subtracts one number from another.
//    * (multiplication): Multiplies two numbers.
//    / (division): Divides one number by another.
//    % (modulo): Returns the remainder of a division.

    int remainder = num1 % num3;

    printf("The remainder of %d divided by %d is %d\n", num1, num3, remainder);

//    == (equal to): Compares if two values are equal.
//    != (not equal to): Compares if two values are not equal.
//    > (greater than): Checks if one value is greater than another.
//    < (less than): Checks if one value is less than another.
//    >= (greater than or equal to): Checks if one value is greater than or equal to another.
//    <= (less than or equal to): Checks if one value is less than or equal to another.

    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d is less than %d\n", num1, num2);
    } else {
        printf("%d is equal to %d\n", num1, num2);
    }

//    && (logical AND): Checks if both conditions are true.
//    || (logical OR): Checks if at least one condition is true.
//    ! (logical NOT): Negates a condition.

    if (num1 > 0 && num2 > 0) {
        printf("Both numbers are positive.\n");
    }

    if (num1 > 0 || num2 > 0) {
        printf("At least one number is positive.\n");
    }

    if (!(num1 < num2)) {
        printf("%d is not less than %d\n", num1, num2);
    }
}

// Functions
// Function declaration
int addd(int a, int b, int c);

void functionExample() {
    int num1 = 10, num2 = 5, result;

    result = add(num1, num2);

    printf("Sum: %d\n", result);
}

// Function definition
int addd(int a, int b, int c) {
    return a + b + c;
}

// Arrays
void array() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    /*sum = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];

    int j = 0;
    while(j < 5) {
        sum += numbers[j];
        j++; // j += 1; j = j + 1;
    }*/

    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    printf("Sum: %d\n", sum);
}


void switchExample() {
    int dayNumber;

    printf("Enter a number (1-7) to find the corresponding day of the week: ");
    scanf("%d", &dayNumber);

    switch (dayNumber) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
            switchExample();
    }

}

// Hello World
int main() {
//    printf("Hello, World!\n");
int count =0;
    while (1){
        if(count %3 ==0){
            count++;
            continue;
        }
        switchExample();
        count++;
        if(count>10){
            break;
        }
    }
    return 0;
}