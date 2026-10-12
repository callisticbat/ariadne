/* prints lines which have more than 80 characters */


#include <stdio.h>

#define MAXLINE 1000

int getLine(char currline[], int maxlen){
    int c, i;
    for (i = 0; i < maxlen && (c = getchar()) != EOF && c != '\n'; ++i){
        currline[i] = c;
    }

    if (c == '\n'){
        currline[i] = c;
        ++i;
    }

    currline[i] = '\0';

    return i;
}

int lineprint(char line[], int start){
    int c, i;
    i = start;
    while ((c = line[i]) != '\0'){
        putchar(c);
        ++i;
    }

    return i + 1;
}

int copy(char to[], char from[], int startIndex){
    int i = 0;
    int endIndex;

    while ((to[startIndex] = from[i]) != '\0'){
        ++i;
        ++startIndex;
    }
    ++startIndex;

    endIndex = startIndex;
    return endIndex;
}

int main(void){

    char line[MAXLINE];
    char above80[MAXLINE];

    int c;          // character
    int currIndex;  // current index
    int lc;         // line count
    int pri;        // printIndex

    c = currIndex = lc = pri = 0;

    // get a line
    while ((c = getLine(line, MAXLINE)) > 0){
        // check if character count > 80
        if (c > 80){
            // copying the line to above80 array
            currIndex = copy(above80, line, currIndex);
            ++lc;
        }
        ;
    }
    // print lines
    printf("%d lines have more than 80 characters\n", lc);
    while (lc > 0){
        printf("%d: ", lc);
        pri = lineprint(above80, pri);
        --lc;
    }

    return 0;
}

