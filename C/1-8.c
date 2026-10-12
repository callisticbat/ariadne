#include <stdio.h>

int main(){
    long nc = 0;    /* new line */
    long tc = 0;    /* tab count */
    long bc = 0;    /* blank count */

    long c;         /* used to get the character */

    while ((c = getchar()) != EOF){
        if (c == '\n')
            ++nc;
        else if (c == '\t')
            ++tc;
        else if (c == ' ')
            ++bc;
    }

    printf("new line count: %ld\ntab count: %ld\nblank count: %ld\n", nc, tc, bc);

    return 0;
}
