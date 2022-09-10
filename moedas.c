#include <stdio.h>


void contarMoedas(float valor){
  int moedas[4] = {0,0,0,0}; // moedas de 10,25,50 e 1 real
  while(valor > 0){
      if ( valor >= 1){
          valor-=1;
          moedas[3]+=1;
      }
      else if( valor >= 0.5){
          valor-=0.5;
          moedas[2]+=1;
      }
      else if( valor >= 0.25){
          valor-=0.25;
          moedas[1]+=1;
      }
      else if( valor >= 0.1){
          valor-=0.1;
          moedas[0]+=1;
      }
    else{
      printf("Restos\n");
    }

  }
printf("Moedas de R$ 1,00: %d\nMoedas de R$ 0,50: %d\nMoedas de R$ 0,25: %d\nMoedas de R$ 0,10: %d\n",moedas[3],moedas[2],moedas[1],moedas[0]);
}
int main(void){
    float valor = 0;
    do{
      printf("Digite o valor: \n");
      scanf("%f",&valor);
    }while(valor <= 0);
    contarMoedas(valor);
    
  
}