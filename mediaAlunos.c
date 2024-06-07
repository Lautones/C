#include <stdio.h>
#include <string.h>

//José de Oliveira Neto RA: 0030482111039
// MATHEUS DA SILVA LAUTON SANTANA RA: 0030482413004

typedef struct Aluno {
    int RA;
    char nome[51];
    int faltas;
    float nota;
} TipoAluno;


float calcularMedia(TipoAluno alunos[], int n) {

    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += alunos[i].nota;
        }

    return soma / n;

}





void OrdenaNome(TipoAluno alunos[], int n) {
    TipoAluno temp;
    for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
    if (strcmp(alunos[j].nome, alunos[j + 1].nome) > 0) {
    temp = alunos[j];
    alunos[j] = alunos[j + 1];
    alunos[j + 1] = temp;
            }
        }
    }
}


void ordenarPorRA(TipoAluno alunos[], int n) {
    TipoAluno temp;
    for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
    if (alunos[j].RA > alunos[j + 1].RA) {
    temp = alunos[j];
    alunos[j] = alunos[j + 1];
    alunos[j + 1] = temp;
            }
        }
    }
}




int pesquisaBinaria(TipoAluno alunos[], int n, int raBusca) {
    int esq = 0;
    int dir = n - 1;
    while (esq <= dir) {
        int meio = (esq + dir) / 2;
        if (alunos[meio].RA == raBusca) {
            return meio;
        } else if (alunos[meio].RA < raBusca) {
            esq = meio + 1;
        } else {
            dir = meio - 1;
        }
    }
    return -1;
}




int main() {
    // Armazenar dados de 6 alunos de forma fixa
    TipoAluno alunos[6] = {
        {101, "Carlos", 2, 7.5},
        {102, "Ana", 1, 8.0},
        {103, "Pedro", 0, 6.0},
        {104, "Maria", 3, 9.0},
        {105, "Joao", 2, 7.0},
        {106, "Bianca", 4, 5.5}
    };

    int n = 6;

    // Ordenar os alunos por nome
    // CHAMAR A FUNÇÃO QUE ORDENA POR NOME
    OrdenaNome(alunos, n);

    // Calcular a média das notas
    // CHAMAR A FUNÇÃO MÉDIA
    float media = calcularMedia(alunos, n);

    // Exibir alunos ordenados por nome
    printf("Alunos ordenados por nome:\n");
    for(int i = 0; i < n; i++) {
        printf("RA: %d, Nome: %s, Faltas: %d, Nota: %.2f\n", alunos[i].RA, alunos[i].nome, alunos[i].faltas, alunos[i].nota);
    }



    // Exibir a média das notas
    printf("\nMedia das notas dos alunos: %.2f\n", media);

    // Ordenar os alunos por RA para a pesquisa binária
    ordenarPorRA(alunos, n);

    printf("\nAlunos ordenados por RA:\n");
    for(int i = 0; i < n; i++) {
        printf("RA: %d, Nome: %s, Faltas: %d, Nota: %.2f\n", alunos[i].RA, alunos[i].nome, alunos[i].faltas, alunos[i].nota);
    }



    // Realizar a pesquisa binária pelo RA 105
    int raBusca = 105  ;
    int resultado = pesquisaBinaria(alunos, n, raBusca);

    if (resultado != -1) {
        printf("\nAluno com RA %d encontrado: Nome: %s, Faltas: %d, Nota: %.2f\n", alunos[resultado].RA, alunos[resultado].nome, alunos[resultado].faltas, alunos[resultado].nota);
    } else {
        printf("\nAluno com RA %d nao encontrado.\n", raBusca);
    }

    return 0;
}









