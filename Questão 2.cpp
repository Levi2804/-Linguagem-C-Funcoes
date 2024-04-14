#include<stdio.h>
#include<locale.h>

void maiormenorneutro(int v);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n; 
	printf("Digite um número inteiro: ");
	scanf("%i", &n);
	
	maiormenorneutro(n);
	
	return(0);
}

void maiormenorneutro(int v){
	if(v > 0){
		printf("\n%i é positivo.", v);
	} else if(v == 0){
		printf("\n0 é neutro.");
	} else{
		printf("\n%i é negativo.", v);
	}
}
