#include <float.h>
#include <limits.h>
#include <stdio.h>

int main() {
    printf("Minimum Signed Char %d\n", -(char) ((unsigned char) ~0 >> 1) - 1);
    printf("Maximum Signed Char %d\n", (char) ((unsigned char) ~0 >> 1));

    printf("Minimum Signed Short %d\n", -(short) ((unsigned short) ~0 >> 1) - 1);
    printf("Maximum Signed Short %d\n", (short) ((unsigned short) ~0 >> 1));

    printf("Minimum Signed Int %d\n", -(int) ((unsigned int) ~0 >> 1) - 1);
    printf("Maximum Signed Int %d\n", (int) ((unsigned int) ~0 >> 1));

    printf("Minimum Signed Long %ld\n", -(long) ((unsigned long) ~0 >> 1) - 1);
    printf("Maximum signed Long %ld\n", (long) ((unsigned long) ~0 >> 1));
}
