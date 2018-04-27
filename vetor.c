#include<stdio.h>
int main(){
	int vetor[10], c, real = 0;
	for(int i = 0 ; i < 10 ; i++){
		printf("Digite o valor de posição %d: ", i);
		scanf("%d", &vetor[i]);
	}
	printf("Digite o valor C: ");
	scanf("%d", &c);
	for(int i = 0 ; i < 10 ; i++){
		for(int j = 0 ; j < 10 ; j++){
			if(i!=j){
				if((vetor[i]*vetor[j])==c){
					printf("%d (pos%d) e %d(pos%d)\n",vetor[i], i,vetor[j], j);
					real++;
				}
			}
		}
	}
	if(real==0){printf("Nao existem tais numeros");}
return 0;
}
