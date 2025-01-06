#include <stdio.h>

/*Replaces \t \b and \\ with their string equivalence*/

int main(){
    int c;

    while((c = getchar()) != EOF)
        if(c == '\t'){
            putchar('\\');
            putchar('t');
        }
        else if(c == '\b'){
            putchar('\\');
            putchar('b');            
        }
        else if(c == '\\'){
            putchar('\\');
            putchar('\\');             
        }
        else
            putchar(c);

}