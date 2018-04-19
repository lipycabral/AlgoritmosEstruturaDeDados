#include<stdio.h>
int main(){
	int num;
	printf("Digite um número");
	scanf("%d", &num);
	if(num%2==0){
		if(num<100){
			printf("Par e menor que 100");
		}
		else{
			printf("Par e maior ou igual a 100");
		}
	}
	else{
		if(num<100){
			printf("Impar e menor que 100");
		}
		else{
			printf("Impar e maior ou igual a 100");
		}
	}
return 0;
}
