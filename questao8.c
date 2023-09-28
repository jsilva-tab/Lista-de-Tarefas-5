#include <stdio.h>

int main() {
    int id;
    float valor, percentual, novoValor, valorMaisCaroAposAumento = 0;
    int produtosMaisCaros = 0;
    float somaValoresSemAumento = 0;
    int quantidadeProdutosSemAumento = 0;

    printf("Informe os dados dos produtos (ID, Valor, Percentual de Aumento):\n");
    printf("Digite 0 para encerrar.\n");

    while (1) {
        printf("ID: ");
        scanf("%d", &id);

        if (id == 0) {
            break;
        }

        printf("Valor: R$");
        scanf("%f", &valor);
        printf("Percentual de Aumento: ");
        scanf("%f", &percentual);

        novoValor = valor + (valor * percentual / 100);

        printf("Novo Valor: R$%.2f\n", novoValor);

        if (novoValor > 100.00 && percentual > 5) {
            produtosMaisCaros++;
        }

        if (percentual == 0) {
            somaValoresSemAumento += valor;
            quantidadeProdutosSemAumento++;
        }

        if (novoValor > valorMaisCaroAposAumento) {
            valorMaisCaroAposAumento = novoValor;
        }
    }

    printf("Quantidade de produtos mais caros que R$ 100.00 (após aumento) e com aumento superior a 5%%: %d\n", produtosMaisCaros);

    if (quantidadeProdutosSemAumento > 0) {
        float mediaValoresSemAumento = somaValoresSemAumento / quantidadeProdutosSemAumento;
        printf("Média de valor dos produtos que não sofreram aumento: R$%.2f\n", mediaValoresSemAumento);
    } else {
        printf("Não há produtos sem aumento.\n");
    }

    printf("Valor do produto mais caro (após aumento): R$%.2f\n", valorMaisCaroAposAumento);

    return 0;
}
