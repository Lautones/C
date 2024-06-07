//Matheus Lauton & Karen Madella
//Com amor

#include <stdio.h>
#include <string.h>
void func(char raAntigo[])
{
    char raNovo[99],Turno,Ano[3],Semestre,numAluno[4];

    if(raAntigo[1]=='D')
        Turno='1';
    else
        Turno='3';

    Ano[0]=raAntigo[2];
    Ano[1]=raAntigo[3];
    Ano[2]='\0';

    if(raAntigo[4]=='1')
        Semestre='1';
    else
        Semestre='2';

    numAluno[0]=raAntigo[5];
    numAluno[1]=raAntigo[6];
    numAluno[2]=raAntigo[7];
    numAluno[3]='\0';

    printf("\n003048%s%c%c%s\n\n",Ano,Semestre,Turno,numAluno);
}
int main()
{
    char raAntigo[9];
    int Contador=0,Numero;

    printf("Numero de RAs:\n");
    scanf("%i",&Numero);

    while(Contador<=Numero)
    {
        printf("Digite o RA antigo:\n");
        scanf(" %8[^\n]",raAntigo);

        func(raAntigo);
        Contador++;
    }
}
