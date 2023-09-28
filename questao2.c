#include <stdio.h>
#include <stdlib.h>

int main(){
    int inteiro,soma=0,qtd=0;
    double media;

    while(1){
        printf("Digite um valor inteiro:");
        scanf("%d",&inteiro);

        if(inteiro <= 0){
            break;
        }
        
        soma += inteiro; 
        qtd++; 
    }

    if (qtd > 0) {
        media = (double)soma / qtd;
        printf("A média dos números positivos digitados é: %.2lf\n", media);
    }
}