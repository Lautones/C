//Construir um programa que conte e imprima o n�mero de ocorr�ncias de uma
//letra, fornecida pelo usu�rio, em uma dada string, tamb�m digitada pelo usu�rio.

#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[47], letra;
    int contador=0;

    printf("Insira uma palavra:\n");
    scanf("%s",palavra);
    //caracter j� pula uma linha automaticamente

    printf("Digite uma letra:\n");
    scanf(" %c",&letra);
    //sempre deixar um espa�o antes do %c

    for(int i=0;i<strlen(palavra);i++)
    {
        if (palavra[i]==letra)
            contador++;
    }
    printf("Qtd vezes que a letra apareceu: %d\n",contador);
}
