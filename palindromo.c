#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char string[50], stringInversa[50];
	int i,j, fim = 0, real = 0;
	printf("Digite: ");
	fgets(string, 50, stdin);

	while(string[fim]!='\0' && string[fim]!='\n')
		fim++;

	i = fim - 1;
	j = 0;
	while(j<(fim)){
		stringInversa[j] = string[i];
		i--;
		j++;
	}
	stringInversa[fim] = '\0';
	int len = strlen(string);
	for (int i = 0, posicao = 0; i < len; i++, posicao++) {
		if (string[posicao] == ' ') {
		    posicao++;
		}
		string[i] = string[posicao];
    	}
	len = strlen(stringInversa);
	for (int i = 0, posicao = 0; i < len; i++, posicao++) {
		if (stringInversa[posicao] == ' ') {
		    posicao++;
		}
		stringInversa[i] = stringInversa[posicao];
    	}
	len = strlen(stringInversa);
	for (int i = 0; i < len; i++) {
		if (stringInversa[i]!=string[i]) {
			real = 1;
		}
    	}
	if(real == 0){printf("Palindromo\n");}
	else{printf("Nao palindromo\n");}
}
