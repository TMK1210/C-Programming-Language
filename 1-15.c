#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void fahr_to_celsius();
void celsius_to_fahr();

int main() 
{
    int c;
    printf("Temperature Conversion Table\n");
    printf("1 - Fahrenheit --> Celsius Conversion\n");
    printf("2 - Celsius --> Fahrenheit Conversion\n");
    printf("Please enter your choice\n");
    c = getchar();

    if (c == '1')
        fahr_to_celsius();
    else if (c == '2')
        celsius_to_fahr();
    else
        printf("Invalid Choice\n");

    return 0;
}

void fahr_to_celsius() {
    float fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3.0f%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}

void celsius_to_fahr() {
    float celsius;
    for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP)
        printf("%3.0f%6.1f\n", celsius, (9.0 * celsius) / 5.0 + 32);
}