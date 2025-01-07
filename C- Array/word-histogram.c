#include <stdio.h>

#define IN 1 /* When looking at word*/
#define OUT 0 /* When looking at blank*/

/*Count length of words and make histogram from counts*/
/*Works for words with 0-9 letters*/

int main(){
    int c, nw, state, wl, i;
    int wlCount[10];

    state = OUT;
    nw = wl = 0;

    for(i = 0; i < 10; ++i){
        wlCount[i] = 0;
    }

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            state = OUT;
            nw++;
            wlCount[wl]++;
            wl = 0;
        }
        else if(state == OUT){
            state == IN;
            wl++;
        }
    }

    printf("%d is the number of words\n", nw);
    printf("Word Lengths\n");

    for(i = 0; i < 10; i++){
        printf("%d: ", i);
        int j;

        for(j = 0; j < wlCount[i]; ++j){
            printf("#");
        }

        printf("\n");
    }
}