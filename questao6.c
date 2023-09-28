#include <stdio.h>

int main() {
    int idade, identificador, opiniao;
    int quantidadeDeDez = 0;
    int somaIdades = 0;
    int quantidadeDePessoas = 0;
    int percentagemOpiniaoCincoOuMenos = 0;
    int pessoaMaisVelha = -1;
    int maiorIdade = -1;

    for (int i = 0; i < 200; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        printf("Digite o identificador da pessoa %d: ", i + 1);
        scanf("%d", &identificador);

        printf("Digite a opinião da pessoa %d sobre a peça (de 0 a 10): ", i + 1);
        scanf("%d", &opiniao);

        if (opiniao == 10) {
            quantidadeDeDez++;
        }

        somaIdades += idade;
        quantidadeDePessoas++;

        if (opiniao <= 5) {
            percentagemOpiniaoCincoOuMenos++;
        }

        if (idade > maiorIdade) {
            maiorIdade = idade;
            pessoaMaisVelha = identificador;
        }
    }

    float mediaIdade = (float)somaIdades / quantidadeDePessoas;
    float percentagem = (float)percentagemOpiniaoCincoOuMenos / quantidadeDePessoas * 100.0;

    printf("a) A quantidade de respostas 10: %d\n", quantidadeDeDez);
    printf("b) A média de idade das pessoas que responderam o questionário: %.2f\n", mediaIdade);
    printf("c) A percentagem de pessoas que responderam 5 ou menos para a opinião da peça: %.2f%%\n", percentagem);
    printf("d) O identificador da pessoa mais velha: %d\n", pessoaMaisVelha);

    return 0;
}
