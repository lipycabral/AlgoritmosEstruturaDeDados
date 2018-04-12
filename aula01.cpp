#include<stdio.h>
void fibbonnaci(int n){
    int pV = 0, sV = 1 , tV, aux;
    while(pV < n){
        printf("%d ", pV);    
        tV = pV+sV;
        pV = sV;
        sV = tV;
    }
    printf("%d", pV); 
}
int retornaMaior(int vetor[], int n){
    int maior = vetor[0];
    for(int i = 0 ; i < n ;i++){
        if(vetor[i] > maior)
            maior = vetor[i];    
    }
return maior;
}
int retornaMenor(int vetor[], int n){
    int menor = vetor[0];
    for(int i = 0 ; i < n ;i++){
        if(vetor[i] < menor)
            menor = vetor[i];    
    }
return menor;
}
main(){
    int n;
    printf("Digite o valor de fibbonnaci: ");
    scanf("%d", &n);
    fibbonnaci(n);
    printf("\n---------------------------\n");
    int vetor[] = {10,9,8,7,6,5,4,3,2,1};
    printf("Maior número do vetor %d", retornaMaior(vetor, 10));
    printf("\n---------------------------\n");
    printf("Menor número do vetor %d", retornaMenor(vetor, 10));
    printf("\n---------------------------\n");
}
