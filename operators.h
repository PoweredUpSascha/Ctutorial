#include <stdio.h>

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