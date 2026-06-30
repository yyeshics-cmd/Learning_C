/*Variables*/

#include <stdio.h>
int main(){
    int x = 5, y = 4;
    int sum = x + y;

    printf("Sum: %d", sum);
    printf("\nSum: %d", x+y);

    int a, b;
    a = b = 50;
    printf("\n%d %d", a, b);

    char myGrade = 'A';
    printf("\n%c\n", myGrade);

    char c1 = 65, c2 = 66, c3 = 67;
    printf("%c", c1);
    printf("%c", c2);
    printf("%c", c3);

    char myText[] = "Hello";
    printf("\n%s\n", myText);

    return 0;
}