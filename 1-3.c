#include <stdio.h>
int main() 
{
    printf("Modify the temperature conversion program:\n");
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahr\tCelsius\t \n");
    while (fahr <= upper) 
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %8.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}