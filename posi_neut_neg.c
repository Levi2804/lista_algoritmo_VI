#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int num;

    printf("Insira um número: ");
    scanf("%i",&num);

    if(num > 0 ){
        printf("é positivo");
    }else{
        if(num < 0 ){
            printf("é negativo");
        }else{
            printf("é neutro");
        }

    }




    return(0);
}