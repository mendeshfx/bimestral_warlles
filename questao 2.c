#include <stdio.h>

int main() {
        int N, linha = 1, coluna = 1, num = 1;

printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    
    if (N <= 0) {
        printf("Por favor, digite um numero positivo.\n");
    }else {
        while (linha <= N) {
            coluna = 1;
            while (coluna <= linha) {
                printf("%d ", num);
                num++;
                coluna++;
            }
            printf("\n");
            linha++;
        }
    }
    
    return 0;                                                          
}
