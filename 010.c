/* if else statement */

#include <stdio.h>
#include <stdbool.h>
int main(){

    if(20 > 18){
        printf("20 is greater than 18\n");
    }

    int x = 20, y = 18;
    if(x > y){
        printf("x is greater than y\n");
    }

    //Using boolean variable in if
    bool isGreater = x >y;
    if(isGreater){
        printf("x is Greater than y\n");
    }

    int time = 20;
    if(time < 12){
        printf("Good morning.\n");
    }else if(time < 18){
        printf("Good day.");
    }else{
        printf("Good evening");
    }

    // Shorten if else
    int age = 20;
    (age < 18) ? printf("Can't vote") : printf("Can vote");

    return 0;
}