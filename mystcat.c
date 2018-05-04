#include<stdio.h>
#include<string.h>
char* mystrcat(char* s1, char* s2, char* sres){
	int i,j = 0;
	for(i = 0; i<(strlen(s1)+strlen(s2));i++){
		if(i < strlen(s1)){
			sres[i] = s1[i];
		}
		else{
			sres[i] = s2[j];
			j++;
		}
	}
	sres[i] = '\0';
	return sres;
}
int main(){
	char s1[20]="TESTE", s2[20] = "Tssssss2";
	char sres[strlen(s1)+strlen(s2)+1];
	char* str;
	str = mystrcat(s1,s2,sres);
	printf("Strings concatenadas: %s\n",str);
	return 0;
}
