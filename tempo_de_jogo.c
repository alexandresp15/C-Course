#include <stdio.h>

int main() {
    int horaIni, horaFim, duracao;

    printf("Hora inicial: ");
    scanf("%d", &horaIni);
    printf("Hora final: ");
    scanf("%d", &horaFim);

    if (horaIni >= horaFim){
        duracao = (24 - horaIni) + horaFim;
    }
    else {
        duracao = (horaFim - horaIni) ;
    }
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
    return 0;
}
