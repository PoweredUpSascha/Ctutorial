#include <stdio.h>

// Arrays
void arrays() {
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
