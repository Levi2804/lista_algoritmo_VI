#include <stdio.h>

int main(){

    int num,de,result;

   
    printf("Insira o denominador: ");
    scanf("%i",&num);

    printf("Insira o numerador: ");
    scanf("%i",&de);

    

    if(num % de == 0){
        printf("e exato");
    }else{
        if(num % de != 0){
            printf("nao e exato");
        }else{
            printf("nao e possivel dividir por 0");
        }
    }

    





}