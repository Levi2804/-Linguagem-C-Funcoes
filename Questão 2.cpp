#include<stdio.h>
#include<locale.h>

void maiormenorneutro(int v);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n; 
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &n);
	
	maiormenorneutro(n);
	
	return(0);
}

void maiormenorneutro(int v){
	if(v > 0){
		printf("\n%i � positivo.", v);
	} else if(v == 0){
		printf("\n0 � neutro.");
	} else{
		printf("\n%i � negativo.", v);
	}
}
