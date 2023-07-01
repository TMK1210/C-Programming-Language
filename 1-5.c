#include <stdio.h>
int main() 
{
    float celsius, fahrenheit;
    int lower, upper, step;
    lower = 0;    
    upper = 300;  
    step = 10;    
    printf("Celsius  Fahrenheit\n");
    for (celsius = upper; celsius >= lower; celsius -= step) 
    {
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%6.2f\t%6.2f\n", celsius, fahrenheit);
    }
}