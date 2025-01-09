#include <stdio.h>

#define MAXLEN  1000/*The max length of input*/
#define MAXLINES 100 /*The max number of lines*/

int getLine(char str[]);
void removeBlanks(char str[]);
int getLineLength(char str[]);
void showEmptySpaces(char str[]);

/*remove trailing blanks and tabs from each line of input, and to delete entirely blank lines*/

int main(){
    int linenum, i;
    char inputs[MAXLINES][MAXLEN];

    linenum = 0;

    while(linenum < MAXLINES && getLine(inputs[linenum]) != 1 && linenum < MAXLINES)
        ++linenum;

    for(i = 0; i < linenum; ++i)
        removeBlanks(inputs[i]);

    for(i = 0; i < linenum; ++i){
        // showEmptySpaces(inputs[i]);
        if(inputs[i][0] != '\0')
            printf("%s\n", inputs[i]);
    }

    return 0;
}

/*GetLine: Get input from user*/
int getLine(char s[]){
    int c, i, flag;

    flag = i = 0;

    while((c = getchar()) != EOF && c !='\n'){
        s[i] = c;
        if((++i) == (MAXLEN -2)){
            s[i] = c = '\n';
            break;
        }
    }

    if(c == '\n'){
        ++i;
        s[i] = '\0';
    }

    if(c == EOF)
        flag = 1;

    return flag;
}

/*removeBlanks: Remove blank lines from saved inputs*/
void removeBlanks(char s[]){
    int len, flag, i;

    len = getLineLength(s);

    flag = 0;

    for(i = (len - 1); i >= 0; --i)
        if(s[i] == ' ' || s[i] == '\t'){
            s[i] = '\0';
        }
        else
            break;
}

/*getLineLength: Gets length of line that is occupied by characters*/
int getLineLength(char s[]){
    int len, i;

    for(i = 0; i < MAXLEN; ++i)
        if(s[i] == '\0'){
            len = i;
            break;
        }

    return len;
}

/*showEmptySpaces: shows the char ' ' and '\t'. For debugging*/
void showEmptySpaces(char s[]){
    int i, len;

    len = getLineLength(s);

    for(i = 0; i < len; ++i){
        if(s[i] == ' ')
            s[i] = '_';

        if(s[i] == '\t'){
            s[i] = '*';
        }
    }
}
