#include<stdio.h>
#include<locale.h>

float media(float n1, float n2, float n3);
void conceito(float m); 

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, m;
	printf("Digite a 1ª nota: ");
	scanf("%f", &n1);
	printf("Digite a 2ª nota: ");
	scanf("%f", &n2);
	printf("Digite a 3ª nota: ");
	scanf("%f", &n3);	
	
	m = media(n1, n2, n3);
	conceito(m);
	
	return(0);
}

float media(float n1, float n2, float n3){
	return((n1 + n2 + n3)/3);
}

void conceito(float m){
		if(m >= 9){
			printf("\nMédia %.1f e conceito A\n", m);
		} else if(m >= 7 && m < 9){
			printf("\nMédia %.1f e conceito B\n", m);
		} else if(m >= 6 && m < 7){
			printf("\nMédia %.1f e conceito C\n", m);
		} else if(m >= 4 && m < 6){
			printf("\nMédia %.1f e conceito D\n", m);
		} else{
			printf("\nMédia %.1f e conceito E\n", m);
		}
}
