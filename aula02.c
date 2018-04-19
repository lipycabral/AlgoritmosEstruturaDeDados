#include<stdio.h>
long int potencia(int a, int b){
    long int resultado = 1;
    for(int i = 0 ; i < b ; i++){
        resultado = resultado*a;
        //printf("%ld ", resultado);
    }
    return resultado;
}
int main(){
    int a, b;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    //potencia(a,b);
    printf("%ld\n", potencia(a,b));
    return 0;
}
