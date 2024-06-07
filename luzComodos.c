#include <stdio.h>
#include <math.h>

int main()
{
    int classe,vetclass[5]={10,15,18,20,25};
    int numcomod,numLamp,totLamp=0;
    float largura,comprimento,area,potIlumi,ilumiTot=0;

    printf("Numero de comodos na casa:\n");
    scanf("%d",&numcomod);

    for (int i=0;i<numcomod;i++)
    {
        printf("\nClasse do comodo %d:\n",i+1);
        scanf("%d",&classe);

        if (classe<1||classe>5)
        {
            printf("Classe do comodo invalida\n");
            continue;
        }
        classe--;

        printf("Digite a largura do comodo em metros:\n");
        scanf("%f",&largura);

        if (largura<0)
        {
            printf("Largura invalida\n");
            continue;
        }
        printf("Digite o comprimento do comodo em metros:\n");
        scanf("%f",&comprimento);

        if (comprimento<0)
        {
            printf("Comprimento invalido\n");
            continue;
        }
        area=largura*comprimento;
        printf("\nArea do comodo: %.2f\n",area);

        potIlumi=area*vetclass[classe];
        printf("Potencia de iluminacao: %.2f\n",potIlumi);

        numLamp=(int)(ceil(potIlumi/60.0));

        printf("Numero de lampadas: %d\n",numLamp);

        totLamp+=numLamp;
        ilumiTot+=potIlumi;
    }
    printf("\nTotal de lampadas: %d\n",totLamp);
    printf("Potencia total de Iluminacao: %.2f\n",ilumiTot);

    return 0;
}

