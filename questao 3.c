#include <stdio.h>

int main() {
    int quantidade, i;
    int numero, maior;
    int vezes_maior = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("A quantidade deve ser maior que zero.\n");
        return 1;
    }

    for (i = 0; i < quantidade; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);

        if (i == 0) {
            maior = numero;
            vezes_maior = 1;
        } else if (numero > maior) {
            maior = numero;
            vezes_maior = 1;
        } else if (numero == maior) {
            vezes_maior++;
        }
    }

    printf("\nO maior numero foi: %d\n", maior);
    printf("Ele foi lido %d vez(es).\n", vezes_maior);

    return 0;
}
