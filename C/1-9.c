#include <stdio.h>

int main(){
    int c;
    int last_c = '\0';                          // to check if previous character was a blank

    // while((c = getchar()) != EOF){           // same output
    //     if (c != ' ' || last_c != ' ')       // using 'is equal to' operator
    //         putchar(c);                      // and logical OR

    //     last_c = c;
    // }

    while ((c = getchar()) != EOF){             // same output using
        if (c == ' ' && last_c == ' ')          // asignment operator and logical AND
            continue;
        putchar(c);
        last_c = c;
    }

    return 0;
}
