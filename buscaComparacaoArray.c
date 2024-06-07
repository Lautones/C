/*Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite um valor de
referência inteiro e:
a) imprima os números do vetor que são maiores que o valor referência xxx
b) retorne quantos números armazenados no vetor são menores que o valor de referência
c) retorne quantas vezes o valor de referência aparece no vetor*/

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

