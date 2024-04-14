#include<stdio.h>
#include<locale.h>
#include<math.h>
#define Pi 3.14

float areacircunferencia(float r);

int main(){
	setlocale(LC_ALL, "Portuguese");
	float r, a;
	printf(">>>Cálculo da área da circunferência<<<");
	printf("\n\nDigite o valor do raio: ");
	scanf("%f", &r);
	
	a = areacircunferencia(r);
	printf("\nA área da circunferência é: %.1f", a);
	
	return(0);
}

float areacircunferencia(float r){
	return(Pi * pow(r,2));
}
