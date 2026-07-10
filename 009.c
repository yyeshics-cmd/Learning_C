/*C Boolean*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    printf("%d\n", isProgrammingFun);
    printf("%d\n", isFishTasty);
    
    //Comparison
    int x = 10, y = 9;
    printf("%d\n", x > y);

    //Storing Comparison Results
    bool isGreater = x > y;
    printf("x is greater than y: %d\n", isGreater);

    return 0;
}