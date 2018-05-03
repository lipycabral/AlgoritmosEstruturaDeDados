#include<stdio.h>
#include<string.h>
char* mystrcat(char* s1, char* s2, char* sres){
	strcat(sres,s1);
	strcat(sres,s2);
	return sres;
}
int main(){
	char s1[20]="TESTE", s2[20] = "1";
	char sres[strlen(s1)+strlen(s2)];
	char* str;
	str = mystrcat(s1,s2,sres);
	printf("Minha string alterada: %s",str);
	return 0;
}
