#include<stdio.h>
#include<locale.h>

int fatorial(int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, f;
	printf(">>>Cálculo da área da circunferência<<<");
	
	do{
		printf("\n\nDigite um número inteiro positivo: ");
		scanf("%i", &n);
	}while(n < 0);
	
	f = fatorial(n);
	printf("\nO fatorial de %i é %i", n, f);
	
	return(0);
}

int fatorial(int n){
	int fat = 1, i;
	for(i = n; i >= 1; i--){
		fat *= i;	
	}
	return(fat);
}
