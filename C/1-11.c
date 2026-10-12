#include <stdio.h>

#define IN 1        // inside a word
#define OUT 0       // outside a word

int main(){

    int c, nc, nw, nl, state;

    nc = nw = nl = 0;
    state = OUT;

    while ((c = getchar()) != EOF){
        ++nc;

        if (c == '\n'){
            ++nl;
            state = OUT;
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state == IN;
            ++nw;
        }
    }

    printf("character count: %d\nword count: %d\nline count: %d\n", nc, nw, nl);

    return 0;
}
