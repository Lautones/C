#include <stdio.h>
int main()
{
    int vetA[6],vetB[6],vetC[11];

    for(int i=0;i<5;i++)
    {
        printf("Digite o elemento %d do vetA:\n",i+1);
        scanf("%d",&vetA[i]);

        vetC[i*2]=vetA[i];
    }
    for(int i=0;i<5;i++)
    {
        printf("Digite o elemento %d do vetB:\n",i+1);
        scanf("%d",&vetB[i]);

        vetC[2*i+1]=vetB[i];
    }
    printf("O vetor C contem os elementos:\n");
    for(int i=0;i<10;i++)
        printf("%d\n",vetC[i]);

    return 0;
}

