#include<stdio.h>
#include<locale.h>

void maiormenoridade(int v);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n; 
	printf("Digite a sua idade: ");
	scanf("%i", &n);
	
	maiormenoridade(n);
	
	return(0);
}

void maiormenoridade(int v){
	if(v > 18){
		printf("\nVocê é maior de idade!");
	} else{
		printf("\nVocê é menor de idade!");
	}
}
