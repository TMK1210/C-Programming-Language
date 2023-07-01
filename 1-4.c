#include <stdio.h>

int main() 
{
    float celsius, fahrenheit;
    int lower, upper, step;
    lower = 0;    
    upper = 100;  
    step = 10;    
    printf("Celsius  Fahrenheit\n");
    celsius = lower;
    while (celsius <= upper) 
    {
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%6.2f\t%6.2f\n", celsius, fahrenheit);
        celsius += step;
    }
    return 0;
}