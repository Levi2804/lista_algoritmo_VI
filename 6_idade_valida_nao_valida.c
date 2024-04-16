#include <stdio.h>
#include <stdlib.h>

int main(){

  int dia,mes,ano,resp;
  char responde;
  
do{
  printf("Insira o dia do seu aniversário: ");
  scanf("%i",&dia);

  printf("Insira o mes do seu aniversário: ");
  scanf("%i",&mes);

  printf("Insira o ano do seu aniversário: ");
  scanf("%i",&ano);

  if((dia < 1 && dia > 31) && (mes < 1 && mes > 12) && (ano < 2013)){
      printf("Data invalida!");
   }else{
      printf("Data valida!");
  }

  printf("Deseja continuar?");
  scanf("%c",&responde);
    if(responde == "S" || responde == "s" ){

    }else{
      break;
    }


}while(responde != "N") || (responde != "n");
    


  return(0);
}
