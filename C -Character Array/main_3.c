#include <stdio.h>

/*Reverse a given string*/
 #define MAXLEN 1000 /*Max length of input*/
 #define MAXLINES 100 /*Max number of lines*/

 void reverse(char str[]);
 int getLineLength(char str[]);
 int getLine(char str[]);

 int main(){
    int linenum, i;
    char inputs[MAXLINES][MAXLEN];

    linenum = 0;

    while(linenum < MAXLINES && getLine(inputs[linenum]) != 1 && linenum < MAXLINES)
        ++linenum;

    for(i = 0; i < linenum; i++){
        reverse(inputs[i]);
    }

    for(i = 0; i < linenum; i++){
        printf("%s\n", inputs[i]);
    }
    
    return 0;
}

/*reverse: reverses string*/
void reverse(char str[]){
    int len, i, j;
    char tmp;

    len = getLineLength(str);

    i = 0; /*Characters from left*/
    j = len; /*Characters from right*/

    while(i < j){
        tmp = str[j];
        str[j] = str[i];
        str[i] = tmp;
        ++i;
        --j;
    }
}

/*getLineLength: Gets length of line that is occupied by characters*/
int getLineLength(char s[]){
    int len, i;

    for(i = 0; i < MAXLEN; ++i)
        if(s[i] == '\0'){
            len = i;
            break;
        }

    return len - 1;
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