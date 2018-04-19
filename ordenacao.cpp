#include<iostream>
#include<stdio.h>
using namespace std;
void bubbleSort(int vetor[], int n);
int main(){
    int vetor[] = {10,9,8,7,6,5,4,3,2,1};
    bubbleSort(vetor, 10);
    for(int i = 0 ; i < 10 ; i++){
        printf("%d ", vetor[i]);
    }    
return 0;
}
void bubbleSort(int vetor[], int n){
    int aux;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n-1 ; j++){
            if(vetor[j]>vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }    
}
