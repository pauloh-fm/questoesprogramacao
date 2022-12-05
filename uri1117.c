#include <stdio.h>

int main(int argc, char const *argv[])
{
    float notaValida = 0;
    float somaNotaValida = 0;
    int i = 0;
    while(i < 2){
        scanf("%f",&notaValida);
        if (notaValida >= 0 && notaValida <= 10){
            somaNotaValida += notaValida;
            i++;
        }else{
            printf("nota invalida\n");
        }
    }
    printf("media = %.2f\n",somaNotaValida/2);
    return 0;
}
