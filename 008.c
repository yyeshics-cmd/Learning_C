/*C Operators*/

#include <stdio.h>
int main(){

    //Arithmetic Operators(+,-,*,/,%,++,--)
    int ans1 = 100 + 50;
    printf("%d\n", ans1);

    //Assignment Operators(=, +=, -=, ...)
    int ans2 = 10;
    ans2 += 5;
    printf("%d\n", ans2);

    //Comparison Operators(==, !=, >, <, >=, <=)
    int x = 2;
    int y = 3;
    printf("%d\n", x > y);  //True(1), False(0)

    //Logical Operators(&&, ||, !)
    int isLoggedIn = 1;
    int isAdmin = 0;

    printf("Regular user: %d\n", isLoggedIn && !isAdmin);
    printf("Has access: %d\n", isLoggedIn || isAdmin);
    printf("Not logged in: %d\n", !isLoggedIn);

    return 0;
}