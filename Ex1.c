/*Write a function called zeroSmaller() that is passed two int arguments 
by pointer and then sets the smaller of the two numbers to 0. Write a 
main() program to exercise this function*/

#include <stdio.h>

/*zeroSmaller()*/
int zeroSmaller(int *num1, int *num2){
    if (*num1 < *num2){
        *num1 = 0;
    }
    else{
        *num2 = 0;
    }
}

/*main*/
int main(){
    int num1, num2;

    /*Enter the numbers*/
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    /*zeroSmaller*/
    zeroSmaller(&num1, &num2);

    printf("After zeroSmaller: number 1 is = %d, number 2 is = %d\n", num1, num2);

    return 0;
}


