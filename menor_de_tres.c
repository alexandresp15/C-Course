#include <stdio.h>

int main() {
    int n1, n2, n3, menor;

    printf("Primeiro valor: ");
    scanf("%d", &n1);
    menor = n1;
    printf("Segundo valor: ");
    scanf("%d", &n2);
    if(menor > n2){
        menor = n2;
    }
    printf("Terceiro valor: ");
    scanf("%d", &n3);
    if(n3 < menor){
        menor = n3;
    }
    printf("MENOR = %d\n", menor);
    return 0;
}
