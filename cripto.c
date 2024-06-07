//Matheus, Cristiane & ChatGPT

#include <stdio.h>
#include <string.h>

void Cripto(char *texto1,char *texto2)
{
    char control1[]={"SX2LJVATbYNR3WIZ4MBEHOqtwe5m6h"};
    char control2[]={"FDGQ0PUCK1pr7v8c9flizogjakxyds"};
    char *pont;
    int i;

    strcpy(texto2,texto1);

    for(i=0;*(texto1+i)!='\0';i++)
    {
        pont=strchr(control1,texto1[i]);
        if (pont!=NULL)
        {
            texto2[i]=control2[pont-control1];
        }

        else
        {
            pont=strchr(control2,texto1[i]);
            if(pont!=NULL)
                texto2[i]=control1[pont-control2];
        }
    }
    texto2[i]='\0';
}
int main()
{
    char texto1[9],texto2[9],texto3[9];
    printf("Informe um texto de ate 8 caracteres:");
    scanf("%[^\n]",texto1);
    Cripto(texto1,texto2);
    Cripto(texto2,texto3);
    printf("Texto criptografado: \n%s\nTexto descriptografado: \n%s\n",texto2,texto3) ;

return 0;
}
