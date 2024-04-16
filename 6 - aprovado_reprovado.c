#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float n1,n2,n3,af,mp,mf;
	
	printf("Insira sua primeira nota: ");
	scanf("%f",&n1);
	
	printf("Insira sua segunda nota: ");
	scanf("%f",&n2);
	
	printf("Insira sua terceira nota: ");
	scanf("%f",&n3);
	
	mp = (n1 + n2 + n3)/3;
	
		if(mp >= 7){
			printf("Sua média foi %.1f, você está aprovado!",mp);
		}else{
			if(mp >= 3.5 && mp < 7){
				printf("Deverá fazer a prova final!\n");
				printf("Insira sua quarta nota: ");
				scanf("%f",&af);
				
				mf = ((6 * mp) + (4 * af))/10;
				
				if(mf >= 5){
					printf("Sua média foi %.1f, está aprovado!",mf);
				}else{
					printf("Sua média foi %.1f, está reprovado.");				}
			}else{
				printf("Está reprovado.");
			}
		}	
	
	
	
	
	
	return(0);
	
	
	
	
	
	
	
}
