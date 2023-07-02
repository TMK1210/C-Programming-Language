#include <stdio.h>
int main() 
{
    int c;
    int char_truoc = EOF;
    printf("Nhập ký tự:");
    c = getchar();
    while (c != EOF) {
        if (c == ' ') {
            if (char_truoc != ' ') {
                putchar(c);
            }
        } 
        else {
            putchar(c);
        }
        char_truoc = c;
        c = getchar();
    }
}