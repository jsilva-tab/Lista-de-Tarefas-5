#include <stdio.h>

int main() {
    char sexo;
    int idade, livros;
    int totalLivrosMenoresDe10 = 0;
    int mulheresCom5LivrosOuMais = 0;
    int somaIdadeHomensMenosDe5Livros = 0;
    int totalHomensMenosDe5Livros = 0;
    int totalPessoas = 0;
    int totalPessoasNaoLeuLivros = 0;

    while (1) {
        printf("Digite o sexo (M para masculino, F para feminino): ");
        scanf(" %c", &sexo);

        if (sexo == 'M' || sexo == 'm') {
            printf("Digite a idade: ");
            scanf("%d", &idade);

            if (idade < 0) {
                break;
            }

            printf("Digite a quantidade de livros lidos em 2006: ");
            scanf("%d", &livros);

            if (idade < 10) {
                totalLivrosMenoresDe10 += livros;
            }

            if (livros >= 5) {
                if (sexo == 'F' || sexo == 'f') {
                    mulheresCom5LivrosOuMais++;
                }
            }

            if (sexo == 'M' || sexo == 'm') {
                somaIdadeHomensMenosDe5Livros += idade;
                totalHomensMenosDe5Livros++;

                if (livros == 0) {
                    totalPessoasNaoLeuLivros++;
                }
            }

            totalPessoas++;
        } else if (sexo == 'F' || sexo == 'f') {
            printf("Digite a idade: ");
            scanf("%d", &idade);

            if (idade < 0) {
                break;
            }

            printf("Digite a quantidade de livros lidos em 2006: ");
            scanf("%d", &livros);

            if (idade < 10) {
                totalLivrosMenoresDe10 += livros;
            }

            if (livros >= 5) {
                mulheresCom5LivrosOuMais++;
            }

            totalPessoas++;
        } else {
            printf("Sexo inválido. Use 'M' para masculino ou 'F' para feminino.\n");
        }
    }

    if (totalHomensMenosDe5Livros > 0) {
        float mediaIdadeHomensMenosDe5Livros = (float)somaIdadeHomensMenosDe5Livros / totalHomensMenosDe5Livros;
        printf("a) A quantidade total de livros lidos pelos entrevistados menores de 10 anos: %d\n", totalLivrosMenoresDe10);
        printf("b) A quantidade de mulheres que leram 5 livros ou mais: %d\n", mulheresCom5LivrosOuMais);
        printf("c) A média de idade dos homens que leram menos que 5 livros: %.2f\n", mediaIdadeHomensMenosDe5Livros);
    } else {
        printf("a) A quantidade total de livros lidos pelos entrevistados menores de 10 anos: %d\n", totalLivrosMenoresDe10);
        printf("b) A quantidade de mulheres que leram 5 livros ou mais: %d\n", mulheresCom5LivrosOuMais);
        printf("c) Nenhum homem leu menos de 5 livros, portanto, a média de idade não pode ser calculada.\n");
    }

    float percentualNaoLeuLivros = (float)totalPessoasNaoLeuLivros / totalPessoas * 100.0;
    printf("d) O percentual de pessoas que não leram livros: %.2f%%\n", percentualNaoLeuLivros);

    return 0;
}
