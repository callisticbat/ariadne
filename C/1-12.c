#include <stdio.h>

int main(){
    /* prints the each word in a new line */

    int c;
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\t'){
            putchar('\n');
            continue;
        }
        putchar(c);
    }
    return 0;
}
