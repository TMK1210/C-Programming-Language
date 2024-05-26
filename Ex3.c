/*Start with a program that allows the user to input a number of 
integers, and then stores them in an int array. Write a function 
called maxint() that goes through the array, element by element, 
looking for the largest one. The function should take as arguments
the address of the array and the number of elements in it, and 
return the index number of the largest element. The program 
should call this function and then display the largest element 
and its index number.
*/

#include <stdio.h>

/* maxint()*/
int maxint(int *arr, int intnum) {
    int maxIndex = 0;
    for (int i = 1; i < intnum; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    int intnum;

    /* Enter the number of integers */
    printf("Enter the number of integers: ");
    scanf("%d", &intnum);

    /* Array to store the integers */
    int arr[intnum];

    /* Enter the integers and store them in the array */
    printf("Enter %d integers:\n", intnum);
    for (int i = 0; i < intnum; i++) {
        scanf("%d", &arr[i]);
    }

    int maxIndex = maxint(arr, intnum);

    /* Print the largest integer and its index */
    printf("The largest number in the array is %d at index %d\n", arr[maxIndex], maxIndex);

    return 0;
}