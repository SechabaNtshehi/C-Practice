#include <stdio.h>

/*prints farenheit-celsius table for fahr = 0, 20, ..., 300*/

int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Farenheit\tCelsius\n");
    while(fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%3.0f\t%3.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("\n\n");
    printf("Celsius\tFarenheit\n");
    celsius = lower;
    while(celsius <= upper){
        fahr = 9/5 * (celsius + 32);
        printf("%3.0f\t%3.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}