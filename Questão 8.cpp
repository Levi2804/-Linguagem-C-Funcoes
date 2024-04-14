#include<stdio.h>
#include<locale.h>

int fatorial(int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, f;
	printf(">>>C�lculo da �rea da circunfer�ncia<<<");
	
	do{
		printf("\n\nDigite um n�mero inteiro positivo: ");
		scanf("%i", &n);
	}while(n < 0);
	
	f = fatorial(n);
	printf("\nO fatorial de %i � %i", n, f);
	
	return(0);
}

int fatorial(int n){
	int fat = 1, i;
	for(i = n; i >= 1; i--){
		fat *= i;	
	}
	return(fat);
}
