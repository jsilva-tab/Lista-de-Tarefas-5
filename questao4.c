#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){
    int cod[TAM],hr[TAM],dependente[TAM];
    double sal[TAM],sal_liq[TAM];

    for(int i=0; i<TAM; i++){
        printf("\nInsira o cod. do funcionario %d:\t",i);
        scanf("%d",&cod[i]);
        printf("Insira as horas trabalhadas do funcionario %d:\t",i);
        scanf("%d",&hr[i]);
        printf("Insira a quantidade de dependentes do funcionario %d:\t",i);
        scanf("%d",&dependente[i]);

        sal[i] = (hr[i]*12)+(dependente[i]*40);

        sal_liq[i] = sal[i] - (sal[i]*0.085) - (sal[i]*0.05);
    }

    for(int i=0; i<TAM; ++i){
        printf("\nCodigo do Funcionario %d: %d\t\tSalario Bruto:R$%.2f\t\tSalario Liquido:R$%.2f\n",i,cod[i],sal[i],sal_liq[i]);
    }
}