#include <stdio.h>
#include <string.h>

int main() {
    int S, R, C, N, total, qtd;
    double Pcoelho, Prato, Psapo;
    char tipo[10];

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &N);
    
    C = 0;
    R = 0;
    S = 0;
    total = 0;
    for (int i = 1; i <= N; i++) {
        printf("Quantidade de cobaias: ");
        scanf("%d", &qtd);
        printf("Tipo de cobaia: ");
        scanf("%s", &tipo);
        if(strcmp (tipo, "C") == 0) {
            C = C + qtd;
        }
        else if (strcmp (tipo, "R") == 0) {
            R = R + qtd;
        }
        else if (strcmp (tipo, "S") == 0) {
            S = S + qtd;
        }
        else {
            printf("VALOR INVALIDO\n"); 
        }
    }
    
    total = C + R + S;
    
    Pcoelho = (double) (C * 100.0) / total;   
    Prato = (double) (R * 100.0) / total ;
    Psapo = (double) (S * 100.0) / total;
    
    printf("\n");
    printf("RELATORIO FINAL:\n");
    printf("Total: %d cobaias\n", total);
    printf("Total: %d coelhos\n", C);
    printf("Total: %d ratos\n", R);
    printf("Total: %d sapos\n", S);
    printf("Porcentual coelhos: %.2lf\n", Pcoelho);
    printf("Porcentual ratos: %.2lf\n", Prato);
    printf("Porcentual sapos: %.2lf\n", Psapo);

    return 0;
    
}
