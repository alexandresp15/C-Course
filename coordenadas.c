#include <stdio.h>

int main() {
    double X, Y;

    printf("Valor de X: ");
    scanf("%lf", &X);
    printf("Valor de Y: ");
    scanf("%lf", &Y);
    
    if (X == 0 && Y == 0) { 
        printf("Origem\n");
    }
    else if (X == 0 || Y == 0) {
        if (X == 0 && Y != 0) {
            printf("Eixo Y\n");
        }
        else {
             printf ("Eixo X\n");
        }
    }
    else if (X > 0 && Y > 0) {
        printf("Q1\n");
    }
    else if (X < 0 && Y > 0) {
        printf("Q2\n");
    }
    else if (X < 0) {
        printf("Q3\n");
    }
    else { 
        printf("Q4\n");
    }   
    return 0;
}
