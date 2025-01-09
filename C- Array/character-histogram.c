#include <stdio.h>

/*Okay! I throw in the towel for now... I'll be baaack!!!*/

#define NEW 1 /*for when new character is found*/
#define OLD 0 /*for when character has been seen before*/

/*Count characters and show them in histogram, characters are letters, blanks and numbers*/
/*Uppercase and lowercase are not treated as same*/
/*Constraint: No function, no pointers*/

int main(){
    int c, i, size, flag;
    int countArr[0], charArr[0];

    size = 0;
    flag = NEW;

    while((c = getchar()) != EOF){
        int index;

        for(i = 0; i < size; ++i){
            if(c == charArr[i]){
                flag = OLD;
                index = i;
            }
        }

        if(flag == OLD){
            countArr[index]++;
            flag = NEW;         /*Reset flag*/
        }
        else if(flag == NEW){
            size++;

            int newCount[size];
            int newChar[size];

            for(i = 0; i < size; i++){
                newCount[i] = countArr[i];
                newChar[i] = charArr[i];

                if(i == (size - 1)){
                    newCount[i] = 1;
                    newChar[i] = c;
                }
            }

            countArr[size];
            charArr[size];

            for(i = 0; i < size; i++){
                countArr[i] = newCount[i];
                charArr[i] = newChar[i];
            }            
        }
    }

    int finalCharArr[size], finalCountArr[size];

    for(i = 0; i < size; i++){
        finalCountArr[i] = countArr[i];
        finalCharArr[i] = charArr[i];
    } 

    for(i = 0; i < size; i++){
        printf("%d\n", finalCountArr[i]);
    }
}