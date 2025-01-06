#include <stdio.h>

/*Counts number of blanks, tabs and newlines*/

int main(){
    int c, bl;

    bl = 0;
    while((c = getchar()) != EOF)
        if(c == ' ' || c == '\n' || c == '\t')
            ++bl;

    printf("%d\n", bl);
}