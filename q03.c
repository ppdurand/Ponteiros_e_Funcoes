#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    bool verificacao = true;
    int vetor[atoi(argv[1])], *pVetor, menorValor, maiorValor, enderecoMenor, enderecoMaior, valorMedio;

    pVetor = malloc(atoi(argv[1]) * sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < atoi(argv[1]); i++){
        *(pVetor + i) = rand() % (10 + 1 - 1) + 1;
    }

    for (int i = 0; i < atoi(argv[1]); i++){
        if (verificacao){
            menorValor = *(pVetor + i);
            maiorValor = *(pVetor + i);
            enderecoMenor = i;
            enderecoMaior = i;
            verificacao = false;
        }else{
            if (menorValor > *(pVetor + i)){
                menorValor = *(pVetor + i);
                enderecoMenor = i;
            }
            if (maiorValor < *(pVetor + i)){
                maiorValor = *(pVetor + i);
                enderecoMaior = i;
            }
        }
    }
    printf("Maior valor: %d\n Menor valor: %d\n", *(pVetor + enderecoMaior), *(pVetor + enderecoMenor));

    puts("Antes");
    for (int i = 0; i < atoi(argv[1]); i++){
        printf(" %d ", *(pVetor + i));
    }

    printf("\n");

    valorMedio = *(pVetor + enderecoMaior) - *(pVetor + enderecoMenor);
    for (int i = 0; i < atoi(argv[1]); i++){
        *(pVetor + i) = (*(pVetor + i) - menorValor) / valorMedio;
    }

    puts("Depois");
    for (int i = 0; i < atoi(argv[1]); i++){
        printf(" %d ", *(pVetor + i));
    }

    return 0;
}
