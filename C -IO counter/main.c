#include <stdio.h>

/*count characters in input; first version*/

int main(){
    long nc;

    nc = 0;

    while(getchar() != EOF)
        ++nc;
    
    printf("%ld is the numbr of characters.\n", nc);
}