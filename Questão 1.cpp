#include<stdio.h>
#include<locale.h>

void verificaZero(int v);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n; 
	printf("Digite um número inteiro: ");
	scanf("%i", &n);
	
	verificaZero(n);
	
	return(0);
}

void verificaZero(int v){
	if(v == 0){
		printf("\n0 é igual a 0.");
	} else{
		printf("\n%i não é igual a 0.", v);
	}
}
