#include <stdio.h>

int main() {

    char nome[11];
    double horas_valor, pagamento;
    int horas_trabalhada;

    printf("Nome: ");
    fgets(nome, 11, stdin);
    printf("Valor por hora: ");
    scanf("%lf", &horas_valor);
    getchar();
    printf("Horas trabalhadas: ");
    scanf("%d", &horas_trabalhada);

    pagamento = horas_valor * horas_trabalhada;
    printf("O pagamento para %s deve ser %.2lf\n", nome, pagamento);


    return 0;
}
