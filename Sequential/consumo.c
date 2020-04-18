#include <stdio.h>

int main() {

    int km;
    double litro, consumo;

    printf("Distancia percorrida: ");
    scanf("%d", &km);
    printf("Combustival gasto: ");
    scanf("%lf", &litro);

    consumo = km / litro;
    printf("Consumo medio = %.3lf\n", consumo);
    

    return 0;
    }
