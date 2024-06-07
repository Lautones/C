//Construir um programa que conte e imprima o número de ocorrências de uma
//letra, fornecida pelo usuário, em uma dada string, também digitada pelo usuário.

#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[47], letra;
    int contador=0;

    printf("Insira uma palavra:\n");
    scanf("%s",palavra);
    //caracter já pula uma linha automaticamente

    printf("Digite uma letra:\n");
    scanf(" %c",&letra);
    //sempre deixar um espaço antes do %c

    for(int i=0;i<strlen(palavra);i++)
    {
        if (palavra[i]==letra)
            contador++;
    }
    printf("Qtd vezes que a letra apareceu: %d\n",contador);
}
