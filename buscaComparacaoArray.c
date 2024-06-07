/*Fa�a um programa que leia 10 n�meros inteiros, armazene-os em um vetor, solicite um valor de
refer�ncia inteiro e:
a) imprima os n�meros do vetor que s�o maiores que o valor refer�ncia xxx
b) retorne quantos n�meros armazenados no vetor s�o menores que o valor de refer�ncia
c) retorne quantas vezes o valor de refer�ncia aparece no vetor*/

#include <stdio.h>
    int main()
    {
        int numVet[11],valRef,qtdMenor=0,qtdVet=0;

        for(int i=0;i<10;i++)
        {
            printf("Insira o numero %d de 10:\n",i+1);
            scanf("%d",&numVet[i]);
        }
        printf("Digite um numero inteiro de referencia:\n");
        scanf("%d",&valRef);

        printf("Numeros maiores que o valor referencia:\n");
        for(int i=0;i<10;i++)
        {
            if(numVet[i]>valRef)
                printf("%d\n",numVet[i]);
            else
                if(numVet[i]<valRef)
                    qtdMenor++;
                else
                    qtdVet++;
        }
        printf("Quantidade de vezes que um numero abaixo do valor de referencia apareceu: %d\n",qtdMenor);
        printf("O valor de referencia aparece %d vez(es)",qtdVet);

        return 0;
    }

