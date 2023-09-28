#include <stdio.h>
#include <stdlib.h>

int main(){
    int inteiro[10],qtd_imp=0,qtd_par=0,somapar=0,somaimp=0;
    double media;

    for(int i=0;i<10;i++){
        printf("Insira um valor:");
        scanf("%d",&inteiro[i]);

        if(inteiro[i]%2 == 0){
            qtd_par++;

            somapar += inteiro[i];
        } else{
            qtd_imp++;

            somaimp += inteiro[i];

            media = (double)somaimp / qtd_imp;
        }
    }

    printf("Quantidade PARES:%d\tSoma Pares:%d\n",qtd_par,somapar);
    printf("Quantidade IMPARES:%d\tMedia Impares:%.2lf\n",qtd_imp,media);
}