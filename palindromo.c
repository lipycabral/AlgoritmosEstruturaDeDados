#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char string[50], stringInvertida[50];
	int tam, j = 0, espaco = 0;
	printf("Digite: ");
	fgets(string, 50, stdin);	 
	tam = strlen(string)-2;
	for(int i = tam ; i >= 0 ; i--){
		stringInvertida[j] = string[i];
		if(string[i] == ' ')
			espaco++;
		j++;
	}
	j = 0;
	char novaS[tam-espaco], novaI[tam-espaco];
	for(int i = 0 ; i < strlen(string)-1 ; i++){
		if((string[i] != ' ') || (string[i] != '\n')){
			novaS[j] = string[i];
			j++;
		}
	}
	j = 0;
	for(int i = strlen(novaS)-1; i >= 0 ; i--){
		if(novaS[i] != '\n'){
			novaI[j] = novaS[i];
			j++;
		}		
	}
	printf("String sem espaco: %sString invertida sem espaco: %s\n espaços %d", novaS, novaI, espaco);
	return 0;
}
