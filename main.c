#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int num1, num2, mult, tentativa, tabela;
    srand(time(NULL));
    do {
        printf("Indique o número para a tabuada que quer fazer: ");
        scanf("%d", &tabela);
        if (tabela == 0) {
            printf("O programa terminou");
            break;
        }
        do {
            do {
                num1 = rand() % 9 + 1;
                num2 = rand() % 9 + 1;
                if (num1 == tabela || num2 == tabela) {
                    mult = num1 * num2;
                    printf("%d x %d = ", num1, num2);
                    scanf("%d", &tentativa);
                    if (tentativa == 0) {
                        printf("\n");
                        break;
                    }
                    while (tentativa != mult) {
                        printf("Resposta errada. Tente de novo: ");
                        scanf("%d", &tentativa);
                        if (tentativa == 0) {
                            printf("\n");
                            break;
                        }
                    }
                    if (tentativa == mult) {
                        printf("Certo\n");
                    }
                }
            } while (tentativa != 0);
        } while (num1 != tabela && num2 != tabela);
    } while (tabela != 0);
    return 0;
}