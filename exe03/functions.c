
#include "functions.h"


void maior_menor(int vet[],int t,int *a,int *b){
    int menor = vet[1];
    int maior = vet[0];
    for(int i = 0; i<t ;i++){
        if(vet[i] < menor ){
            menor = vet[i];
        }
        else if(maior < vet[i]){
            maior = vet[i];
        }
    }
    *a = menor;
    *b = maior;
}