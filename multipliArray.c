//Dados dois vetores x e y em um espa�o de 10 dimens�es, determine o produto escalar desses vetores
//usando um la�o.

#include<stdio.h>
int main()
{
    int vetX[11],vetY[11],produto=0;

    for(int i=0;i<10;i++)
    {
        printf("Digite o valor no vetX[%d]:\n",i+1);
        scanf("%d",&vetX[i]);

        printf("Digite o valor no vetY[%d]:\n",i+1);
        scanf("%d",&vetY[i]);

        produto=produto+vetX[i]*vetY[i];
    }

    printf("O produto escalar desses vetores e igual a %d",produto);

    return 0;
}
