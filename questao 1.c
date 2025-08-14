#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("=== MENU DE OPERACOES ===\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("=========================\n");
    
    printf("Escolha uma opcao (1 a 4): ");
    scanf("%d", &opcao);
    
     if (opcao >= 1 && opcao <= 4) {
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
     }
        
        if (opcao == 1) {
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
        }else if (opcao == 2) {
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
        }else if (opcao == 3) {
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
        } else if (opcao == 4) {
            }if (num2 == 0) {
                printf("Erro: divisao por zero!\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            }

    return 0;
}
