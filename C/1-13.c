#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
    /* a histogram for lengths of words in its input */

          // 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6
    // word1 | | | | | | | | |
    // word2 | | | |
    // word3 | | | | | | | | | | | | | | | |

    int c, nc, state;
    nc = 0;
    state = OUT;

    for (int i = 0; i < 11; )
    while ((c = getchar()) != EOF){
        if (c == '\n' || c == '\t' || c == ' '){
            state = OUT;
            nc = 0;
        }
        if (state == OUT && c != '\n' && c != '\t' && c != ' '){
            state = IN;
        }
        if (state == IN){
            ++nc;
            printf("|");
            }
        }
    return 0;
    }
