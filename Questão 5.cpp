#include<stdio.h>
#include<locale.h>

void multiplode5(int v);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n; 
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &n);
	
	multiplode5(n);
	
	return(0);
}

void multiplode5(int v){
	if(v % 5 == 0){
		printf("\n%i � multiplo de 5", v);
	} else{
		printf("\n%i n�o � multiplo de 5", v);
	}
}
