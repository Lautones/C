/*Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u)
possui essa palavra. Entre com um caractere (vogal ou consoante) e substitua
todas as vogais da palavra dada por esse caractere.*/


#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[47];
    int contador=0;
    char caracterUnico;

    printf("Digite uma palavra: \n");
    scanf("%s",palavra);

    for(int i=0;i<strlen(palavra);i++)
    {
        if(palavra[i]=='a'||palavra[i]=='e'||palavra[i]=='i'||palavra[i]=='o'||palavra[i]=='u')
            contador++;
    }
    printf("Numero de vogais na palavra: %d\n",contador);

    printf("Insira um caracter: ");
    scanf(" %c",&caracterUnico);

    for(int i=0;i<strlen(palavra);i++)
    {
        if(palavra[i]=='a'||palavra[i]=='e'||palavra[i]=='i'||palavra[i]=='o'||palavra[i]=='u')
            palavra[i]=caracterUnico;
    }
    printf("%s\n",palavra);

    return 0;
}
