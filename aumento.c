#include <stdio.h>

int main() {
    double salario, novoSalario, aumento;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);

    if (salario <= 1000.00) {
        aumento = salario * 0.2;
        novoSalario = salario + aumento;
        printf("Novo Salario: %.2lf\nAumento = %.2lf\nPorcentagem = 20%\n", novoSalario, aumento);
    }
    else if (salario <= 3000.00) {
        aumento = salario * 0.15;
        novoSalario = salario + aumento;
        printf("Novo Salario: %.2lf\nAumento = %.2lf\nPorcentagem = 15%\n", novoSalario, aumento);
    }
    else if (salario <= 8000.00) {
        aumento = salario * 0.1;
        novoSalario = salario + aumento;
        printf("Novo Salario: %.2lf\nAumento = %.2lf\nPorcentagem = 10%\n", novoSalario, aumento);
    }
    else if (salario > 8000.00){
        aumento = salario * 0.05;
        novoSalario = salario + aumento;
        printf("Novo Salario: %.2lf\nAumento = %.2lf\nPorcentagem = 5%\n", novoSalario, aumento);
    }
    return 0;
}
