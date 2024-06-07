//Dados dois vetores A e B contendo 20 elementos inteiros cada, gerar e exibir um vetor
//C do mesmo tamanho cujos elementos sejam a soma dos respectivos elementos de A e B


#include <stdio.h>
int main()
{
    int vetA[6],vetB[6],vetC[6];

    for(int i=0;i<5;i++)
    {
        printf("Digite o numero vetA[%d]:\n",i+1);
        scanf("%d",&vetA[i]);
        printf("Digite o numero vetB[%d]:\n",i+1);
        scanf("%d",&vetB[i]);
        vetC[i]=vetA[i]+vetB[i];
    }
    printf("Os valores do Vetor C sao\n");
    for(int i=0;i<5;i++)
        printf("%d\n",vetC[i]);

    return 0;

}
