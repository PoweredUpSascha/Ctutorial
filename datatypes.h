#include <stdio.h>
#include <stdbool.h>

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