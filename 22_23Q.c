#include <stdio.h>

int main(){

    int A, B, C;
    printf("Enter the sides of the triangles(>0): ");
    scanf("%d %d %d", &A, &B, &C);

    if(A == B){
        if(B == C){
            printf("Equllateral Triangle");
        }else{
            printf("Isosceles Triangle");
        }
    }else{
        if(B == C){
            printf("Isosceles Triangle");
        }else{
            printf("Scalene Triangle");
        }
    }
    return 0;
}