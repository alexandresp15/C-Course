#include <stdio.h>

int main() {
    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    if (senha == 2002) {
        printf("Acesso permitido!\n");
    }
    else {
        while (senha != 2002) {
            printf("Senha Invalida! Tente novamente: ");
            scanf("%d", &senha);
        }
        printf("Acesso permitido!\n");
    }
    return 0;
}
