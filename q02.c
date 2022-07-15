#include <stdio.h>
#include <stdlib.h>

void gerarVetor(int *pVetor, int tam){

    for(int i = 0; i < tam; i++){

        printf("Digite um numero: ");
        scanf("%d", (pVetor+i));

    }

}
void menorNumero(int *pVetor, int tam){

    int *pMenor;
    pMenor  = pVetor;

    for(int i = 1; i < tam; i++){
        
        pMenor = (*pMenor > *(pVetor + i)) ? (pVetor + i):pMenor; 
    }

    printf("Endereço: %p\nNumero: %d\n", pMenor, *pMenor);
}

int main(){

    int *p=NULL;

    int tam;

    puts("Digite o tamanho do vetor: ");

    scanf("%d", &tam);

    p = malloc(tam * sizeof(int));

    if(!p){

        printf("Não foi possível alocar o ponteiro");
        exit(1);

    }

    gerarVetor(p, tam);
    menorNumero(p, tam);

    return 0;

}
