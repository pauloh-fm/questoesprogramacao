// perfeitamente quadrados
#include <stdio.h>
#include <math.h>

int medidaTerreno ( int mA, int mB, int perc){
    int qtd = 0;
    int areaNecessaria = mA * mB;
    int areaTotal = mA * mB * 100/perc;
    float resultado = sqrt( areaTotal);
    return  resultado ;
}

int main(int argc, char const *argv[])
{
    int medidaA, medidaB , percentual = 0;
    do
    {
       scanf("%d", &medidaA);
       if (!medidaA) break;
       scanf("%d %d",&medidaB, &percentual);
      // printf("%d %d %d", medidaA, medidaB, percentual);
       int resultado = medidaTerreno(medidaA, medidaB, percentual);
       printf("%d\n", resultado);

    } while (medidaA);
    
    

    
    return 0;
}
