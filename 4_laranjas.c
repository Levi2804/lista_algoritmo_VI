#include <stdio.h>

int main(){
	
	int quant;
	float valorT;
	
	printf("Insira a quantidade desejada: ");
	scanf("%i",&quant);
	
	if(quant < 12){
		valorT = quant * 1.30;
		printf("Valor a ser pago: R$%f",valorT);
		
	}else{
		valorT = quant * 1.10;
		printf("Valor a ser pago: R$%.1f",valorT);
	}
	
	return(0);
	
}
