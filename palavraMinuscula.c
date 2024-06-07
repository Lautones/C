
/*
Matheus Lauton & Karen Madella

Parabéns, professora

Vamos ao que interessa, com muito amor:
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void funcPalavraMinuscula(char *palavraUser)
{
    char vetPalavraDecodif[100];
    int  j=0;

    int tamanhoString=strlen(palavraUser)-1;

    for (int i=0;i< strlen(palavraUser);i++)
    {
        if (islower(palavraUser[tamanhoString]))
            vetPalavraDecodif[j++]=palavraUser[tamanhoString];

        tamanhoString--;
    }

    vetPalavraDecodif[j] = '\0';
    printf("%s\n", vetPalavraDecodif);
}

int main()
{
    char palavraUser[100];
    int qtdeStrings;

    printf("Quantas strings para teste?\n");
    scanf("%d", &qtdeStrings);
    getchar();

    for (int k=0;k<qtdeStrings;k++)
    {
        printf("\nDigite uma palavra codificada:\n");
        fgets(palavraUser,sizeof(palavraUser),stdin);

        printf("A palavra decodificada:\n");
        funcPalavraMinuscula(palavraUser);
    }

    return 0;
}
