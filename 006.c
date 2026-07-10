/*C Type Convertion*/

#include <stdio.h>
int main(){
    int x = 5;
    int y = 2;
    int sum = 5/2;

    printf("%d\n", sum); //doesn't show the decimal part

    //Automatic convertion: int to float
    float myFloat = 9;
    printf("%f\n", myFloat);

    //float to int 
    int myInt = 9.99;
    printf("%d\n", myInt);

    //Manual convertion: 
    float sum1 = (float) 5 / 2;
    printf("%f\n", sum1);

    float sum2 = 5.0 / 2.0;
    printf("%.1f\n", sum2);
    
    return 0;
}