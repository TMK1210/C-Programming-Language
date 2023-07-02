#include <stdio.h>
int main() 
{   
    int c;
    int blanks = 0;
    int tabs = 0;
    int newlines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            blanks = blanks + 1;
        else if (c == '\t')
            tabs = tabs + 1;
        else if (c == '\n')
            newlines = newlines + 1;
    }
    printf("Blanks: %d\n", blanks);
    printf("Tabs: %d\n", tabs);
    printf("Newlines: %d\n", newlines);
}


