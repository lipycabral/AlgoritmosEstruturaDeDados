
#include<stdio.h>
//fibonacci sem recursividade
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
//fibonacci com recursividade
int fibonacciTeste(int n){
    int fib;
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else {
        fib = (fibonacciTeste(n-1)+fibonacciTeste(n-2));
        return fib;
    }
}
//fatorial com recursividade
int fatorial(int n){
    int fat;
    if(n==0){
        return 1;
    }
    else{
        fat = n*fatorial(n-1);
        return fat;
    }
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
    int n, i;
    printf("Digite o valor de fibbonnaci: ");
    scanf("%d", &n);
    printf("---------------------------\n");
    for(i = 0 ; fibonacciTeste(i)<n ; i++)
        printf("%d ",fibonacciTeste(i));
    printf("%d ",fibonacciTeste(i));
    printf("\n---------------------------\n");
    /*printf("\n---------------------------\n");
    for(int i = 0 ; i < 10 ; i++)
        printf("%d ",fatorial(i));
    
    printf("\n---------------------------\n");
    int vetor[] = {10,9,8,7,6,5,4,3,2,1};
    printf("Maior número do vetor %d", retornaMaior(vetor, 10));
    printf("\n---------------------------\n");
    printf("Menor número do vetor %d", retornaMenor(vetor, 10));
    printf("\n---------------------------\n");
    */
}
