#include <stdio.h>

int main() {
    int alcool, gasolina, diesel, cod;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d", &cod);

    alcool = 0;
    gasolina = 0;
    diesel = 0;
    
    while (cod != 4) {
        if (cod == 1) {
            alcool++;
        }
        else if (cod == 2) {
            gasolina++;
        }
        else if (cod == 3) {
            diesel++;
        }
        printf("Informe um codigo (1, 2, 3) out 4 para parar: ");
        scanf("%d", &cod);
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);

    return 0;
}
