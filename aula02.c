#include<stdio.h>
long int potencia(int a, int b){
    long int resultado = 1;
    for(int i = 0 ; i < b ; i++){
        resultado = resultado*a;
        //printf("%ld ", resultado);
    }
    return resultado;
}
int produtoInterno(int v0[], int v1[], int tam){
    int resultado=0;
    for(int i=0;i<tam;i++)
        resultado = resultado +v0[i]*v1[i];
    return resultado;
}
int checaVetor(int v0[], int v1[], int tam){
    int valor = 0;
    for(int i =0; i<tam; i++)
        if(v0[i]==v1[i])
            valor++;
    return valor;
}
int main(){
/*
    int a, b;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    //potencia(a,b);
    printf("%ld\n", potencia(a,b));
*/
    int v0[] = {1,2,3,4,5}, v1[] = {1,2,3,4,5};
    printf("%d\n", produtoInterno(v0,v1,5)); 
    printf("%d\n", checaVetor(v0,v1,5));
    return 0;
}
