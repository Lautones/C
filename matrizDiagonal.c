#include <stdio.h>
int main()
{
    int matrizUser[5][6];
    int vetor[30],contador=0;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            printf("Digite o valor em matrizUser[%d][%d]:\n",i,j);
            scanf("%d",&matrizUser[i][j]);

            vetor[contador]=matrizUser[i][j];
            contador++;
        }
    }
    printf("Vetor:\n");
    for(int i=0;i<30;i++)
    {
        printf("%d\n",vetor[i]);
    }
    printf("Diagonal Principal:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",matrizUser[i][i]);

    }
    return 0;
}
