#include <stdio.h>

/*Count digits, white space and others*/

int main(){
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;

    for(i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while((c = getchar()) != EOF)
        if(c == ' ' || c == '\t' || c == '\n')
            nwhite++;
        else if(c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else
            ++nother;

    printf("digits = ");
    for(i = 0; i < 10; ++i)
        printf("%d ", ndigit[i]);

    printf("\nwhite space = %d, other = %d\n", nwhite, nother);
}