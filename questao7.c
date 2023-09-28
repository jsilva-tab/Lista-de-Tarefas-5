#include <stdio.h>

int main(){
    int serie,qtdlivros,gostaRedacao,idade;
    int alunosTercSerie=0,maiorQtdLivro=0,alunosNaoRedacao=0;
    float porcentagem;

    while(1){
        puts("Insira a sua idade:");
        scanf("%d",&idade);

        if(idade<=0){
            break;
        }

        puts("Informe a sua serie:");
        puts("1-Primeira;");
        puts("2-Segunda;");
        puts("3-Terceira;");
        puts("4-Quarta;");
        scanf("%d",&serie);

        puts("Quantos livros voce le por mes:");
        scanf("%d",&qtdlivros);

        puts("Gosta de fazer redacao?\n1-Sim\t\t2-Nao");
        scanf("%d",&gostaRedacao);

        if(serie<=0 || gostaRedacao<=0){
            printf("Resposta invalida, tente novamente.\n");
            break;
        }

        if(serie==3){
            alunosTercSerie++;
        }

        if(serie==4 && qtdlivros>maiorQtdLivro){
            maiorQtdLivro =  qtdlivros;
        }

        if(serie==3 && gostaRedacao==2){
            porcentagem = ( (float)alunosNaoRedacao / (float)alunosTercSerie) * 100.00;
        }
    }

    printf("Quantidade de alunos na terceria serie: %d\n",alunosTercSerie);
    printf("A maior quantidade de livros lidos por um aluno da quarta serie: %d\n",maiorQtdLivro);
    printf("A porcentagem de alunos que nao gostam de fazer redacao e estao na terceira serie: %d\n",porcentagem);
}