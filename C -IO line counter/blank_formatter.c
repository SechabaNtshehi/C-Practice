#include <stdio.h>

/*Replace two or more blanks in a string with single blank */

int main(){
    int bc, c;

    while((c = getchar()) != EOF){
        if(c == ' ')
            ++bc;
        else
            bc = 0;

        if(bc < 2)
            putchar(c);
    }
}