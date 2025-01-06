#include <stdio.h>

#define IN 1 /*Inside a word*/
#define OUT 0 /*Outside a word*/

/* Count lines, words and characters in input*/

int main(){
    int c, nl, nw, nc, state;

    state = OUT;

    nc = nw = nl = 0;

    while((c = getchar()) != EOF){
        ++nc;

        if(c == '\n')
            ++nl;

        if(c == '\n' || c == ' ' || c == '\t')
            state = OUT;
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nc, nw, nl);
}