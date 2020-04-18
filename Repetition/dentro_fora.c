#include <stdio.h>

int main() {
    int X, num, dentro, fora; 

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &X);
   
    dentro = 0;
    fora = 0;  
    for (int i = 1; i <= X; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num >= 10 && num <= 20) {
           dentro++;
        }
        else {
                fora++;
        }
    }
    printf("%d DENTRO\n%d FORA\n", dentro, fora);
    return 0;
}
