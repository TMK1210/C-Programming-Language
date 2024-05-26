/*Write a program that calculates how much money you’ll end up 
with if you invest an amount of money at a fixed interest rate, 
compounded yearly. Have the user furnish the initial amount, 
the number of years, and the yearly interest rate in percent. 
Some interaction with the program might look like this:
Enter initial amount: 3000
Enter number of years: 10
Enter interest rate (percent per year): 5.5
At the end of 10 years, you will have 5124.43 dollars
At the end of the first year you have 3000 + (3000 * 0.055), 
which is 3165. At the end of the second year you have 3165 + 
(3165 * 0.055), which is 3339.08. Do this as many times as there 
are years. A for loop makes the calculation easy.
*/

#include <stdio.h>
#include <math.h>

/* Loop for the years: */
int Results(int InitialAmount, int years, double InterestRate){
    for (int i = 0; i < years; i++) {
        InitialAmount = InitialAmount + (InitialAmount * (InterestRate / 100.0));
    }
    return InitialAmount;
}

int main(){
    int InitialAmount, years;
    double InterestRate;

    /* Enter the variables: */
    printf("Enter initial amount: ");
    scanf("%d", &InitialAmount);
    printf("Enter years: ");
    scanf("%d", &years);
    printf("Enter interest rate: ");
    scanf("%lf", &InterestRate);

    /* Result: */
    int FinalAmount = Results(InitialAmount, years, InterestRate);
    printf("At the end of %d years, you will have %d dollars\n", years, FinalAmount);

    return 0;
}


