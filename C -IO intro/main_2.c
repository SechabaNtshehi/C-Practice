#include <stdio.h>

/*copy input into output*/

int main(){
    int c;

    while((c = getchar()) != EOF)
        putchar(c);
}