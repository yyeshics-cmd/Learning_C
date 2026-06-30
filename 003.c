/*Format Specifiers*/

#include <stdio.h>
int main(){
    int myNum = 15;
    float myFloatNum = 5.99;
    char myLetter = 'Y';

    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    printf("My Student number is: %d", myNum);
    printf("\nMy Student number is %d and my letter is %c", myNum, myLetter);

    //print values without variables
    printf("\nMy Student number is: %d", 42);
    return 0;
}