#include <stdio.h>

#define MAXLINE 1000 /*The maximum length of input line*/
#define MAXNUMLINES 100 /*The maximum number of lines*/

/*Print lines of at least length 80*/

int getLine(char line[], int maxline);
void copy(char to[], char from[]);
void printArr(char arr[][MAXLINE], int numlines);

int main(){
    int len; /* current input length*/
    int max; /*maximum length seen so far*/
    int i; 
    char currline[MAXLINE]; /*current input line*/;
    char lines[MAXNUMLINES][MAXLINE]; /*lines at least  80 in length*/
    
    max = 0;

    while((len = getLine(currline, MAXLINE)) > 0 && i < MAXNUMLINES)
        if(len > 80){
            copy(lines[i], currline);
            i++;
        }


    printArr(lines, i);
    return 0;
}

/*getLine: read a line into s, return length*/
int getLine(char s[], int lim){
    int c, i;

    for(i = 0; i < lim -1 && ((c = getchar())) != EOF && c != '\n'; ++i)
        s[i] = c;

    if(c == '\n'){
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

/*copy: copy 'from' into 'to'; assume 'to' is big enough*/
void copy(char to[], char from[]){
    int i;

    i = 0;

    while((to[i] = from[i]) != '\0')
        ++i;
}

void printArr(char arr[][MAXLINE], int numlines){
    int i;

    for(i = 0; i< numlines; ++i){
        printf("%s", arr[i]);
    }
}

