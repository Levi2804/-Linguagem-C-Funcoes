#include<stdio.h>
#include<locale.h>

void parimpar(int v);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n; 
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &n);
	
	parimpar(n);
	
	return(0);
}

void parimpar(int v){
	if(v % 2 == 0){
		printf("\n%i � par.", v);
	} else{
		printf("\n%i � impar.", v);
	}
}
