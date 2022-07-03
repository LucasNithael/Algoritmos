#include <stdio.h>

struct aluno{
        long long matricula;
        int notas[10];
        int pesos[10];
        int qtd_notas;
    };

void ler_dados(int qtd, struct aluno *alunos){
    int i, j;
    for(i=0 ; i<qtd ; i++){
        scanf("%lld", &alunos[i].matricula);
        scanf("%d", &alunos[i].qtd_notas);
        for(j=0 ; j<alunos[i].qtd_notas ; j++)
            scanf("%d %d", &alunos[i].notas[j], &alunos[i].pesos[j]);
    }
}

void mostra_dados(int qtd, struct aluno *alunos){
    int j, i;
    for(i=0 ; i<30 ; i++){
        printf("Aluno: %lld\n", alunos[i].matricula);
        printf("%d\n ", alunos[i].notas);
        printf("{");
        for(j=0 ; j<alunos[i].qtd_notas ; ++j)
            printf("(%d %d)", alunos[i].notas[j], alunos[i].pesos[j]);
        printf("}");
    }
}




int main(){
    
    int qtd_alunos;
    scanf("%d", &qtd_alunos);
    struct aluno alunos[qtd_alunos];
    ler_dados(qtd_alunos, alunos);
    mostra_dados(qtd_alunos, alunos);
    return 0;
}