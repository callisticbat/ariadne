/* removing trailing blanks from input lines or completely omitting blank lines */
#include <stdio.h>

#define MAXLINE 1000
#define ON 1
#define OFF 2

int copy(int to[], int c, int i){
    int i = 0;
    for (i; (to[i] = from[i] != '\0'; ++i) {
        ;
    }
}

int getLine(){
    int c;
    int trigg = OFF;
    int cbuff[MAXLINE];
    int i = 0;

    while ((c = getchar()) != EOF){
        if (c == '\n' && trigg == ON){
	    ;
        } else if (c == ' ' | c == '\t'){
	    copy(cbuff, c);
	    trigg == ON;
        }
    }
}

int main(void){
    
    // get line
    // storing the line
    // check if any trailing blanks
    // subtracting blanks from the buffer
    // printing clean line
    return 0;
}
