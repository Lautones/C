#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char numBoleto[53];
    char valor[11];
    float valorPagar;

    while(1)
    //1 sempre e verdadeiro, portanto, looping infinito
    {
        printf("Digite o numero do Boleto ou 'FIM' para encerrar:\n");
        gets(numBoleto);
        if(strcmp(numBoleto,"FIM")==0)
            break;
        //strcmp compara dois valores

        if (strncmp(numBoleto,"001",3)==0)
            printf("Banco do Brasil\n");
        //strcmp compara as duas strings de acordo com as casas indicadas

        else if(strncmp(numBoleto,"033",3)==0)
            printf("Santander\n");

        else if (strncmp(numBoleto,"104",3)==0)
            printf("Caixa Econômica Federal\n");

        else if(strncmp(numBoleto,"341",3)==0)
            printf("Itau\n");

        else if (strncmp(numBoleto,"745",3)==0)
            printf("Citibank\n");

        else
        {
            printf("Banco Invalido");
            return 1;
        }

        strncpy(valor,numBoleto+43,10);
        //o mais 43 ta indicando em que ponto comecar a copiar

        valorPagar=((atof(valor))/100)*1.1;
        //atof converte string para float. Adicionar biblioteca <stdlib.h>

        printf("O valor da conta + multa: %.2f\n",valorPagar);
    }

    return 0;


}
