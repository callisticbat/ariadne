#include <stdio.h>

#define MAXLINE 1000    // maximum length for input line

// int getline(char current_line, int maximum_length);
// void copy(char to_this_array[], char from_this_array[]);

int getline(char s[], int maximum){
    // get an input line

    int c, i;
    for (i = 0; i < maximum - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

void copy(char to[], char from[]){
    int i = 0;
    while ((to[i] = from[i]) != '\0'){
        ++i;
    }
}

int main(void){
    int max;
    int len;

    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0){
        if (len > max){
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0){
        printf("%s", longest);
        printf("length: %d", max);
    }
    return 0;
}
