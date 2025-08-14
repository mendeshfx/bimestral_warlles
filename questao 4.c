#include <stdio.h>

int main() {
    float velocidade;

    printf("Com qual velocidade voce costuma dirigir (km/h)? ");
    scanf("%f", &velocidade);

    if (velocidade > 75) {
        printf("Guarda: Voce esta dirigindo muito rapido! Vai levar uma multa.\n");
    } else {
        if (velocidade > 65) {
            printf("Guarda: Cuidado! Voce esta acima do limite de velocidade.\n");
        } else {
            if (velocidade > 55) {
                printf("Guarda: Mantenha a atencao, voce esta perto do limite.\n");
            } else {
                if (velocidade > 45) {
                    printf("Guarda: Muito bem, voce esta dentro do limite.\n");
                } else {
                    if (velocidade == 45) {
                        printf("Guarda: Velocidade exata! Continue assim.\n");
                    } else {
                        printf("Guarda: Voce esta dirigindo muito devagar, isso pode ser perigoso!\n");
                    }
                }
            }
        }
    }

    return 0;
}
