#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &n1, &n2);

    if (n1 % n2 == 0 || n2 % n1 == 0) {
        printf ("Sao multiplos\n");
    }
    else {
        printf ("Nao sao multiplos\n");
    }
    return 0;
}
