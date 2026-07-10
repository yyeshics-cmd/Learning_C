/*Constant Variables*/

#include <stdio.h>
int main(){

    const int myNum = 15;
    //myNum = 10;       error: assignment of read-only variable 'myNum'

    //best practices 
    const int BIRTHDAY = 2005;  //use uppercase for variable name

    return 0;
}