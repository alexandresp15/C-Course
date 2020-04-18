#include <stdio.h>

int main() {
    char tipo;
    double F, C;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%s", &tipo);

    if (tipo == 'F') {
        printf("Digite a temperatura em Fahrenheit: "); 
        scanf("%lf", &F);
        C = (F-32.0) / 1.8;
        printf("Temperatura equivalente em Celsius: %.2lf\n", C);
    }
    else if (tipo == 'C') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &C);
        F = (C * 1.8) + 32.0;
        printf("Temperatura equivalente em Fahrenheit: %.2lf\n", F);
    }
    else {
        printf("Valor Invalido\n");
    }
    return 0;
}
