#include<stdio.h>
#include<locale.h>

float volume(float c, float l, float a);

int main(){
	setlocale(LC_ALL, "Portuguese");
	float c, l, a, v;
	printf(">>>Cálculo do volume da caixa retangular<<<");
	printf("\n\n=================================");
	printf("\nDigite o valor do comprimento: ");
	scanf("%f", &c);
	printf("\nDigite o valor da largura: ");
	scanf("%f", &l);
	printf("\nDigite o valor da altura: ");
	scanf("%f", &a);
	
	v = volume(c, l, a);
	printf("\n=================================");
	printf("\nO volume da caixa retangular é: %.1f", v);
	
	return(0);
}

float volume(float c, float l, float a){
	return(c * l * a);
}
