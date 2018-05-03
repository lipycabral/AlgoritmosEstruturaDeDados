#include<stdio.h>
#include<string.h>
int main(){
	char string[80], stringInversa[80], aux;
	int i,j, fim = 0;
	fgets(string, 80, stdin);

	while(string[fim]!='\0' && string[fim]!='\n')
		fim++;

	i = fim - 1;
	j = 0;
	while(j<(fim/2)){
		aux = string[i];
		string[i] = string[j];
		string[j] = aux;
		i--;
		j++;
	}
	stringInversa[fim] = '\0';
	printf("Inversa: \n%s\n", string);

return 0;
}
