#include <stdio.h>
int main ()
{
    int xadrezTab[8][8]=
       {{6, 0, 0, 5, 0, 0, 1, 0},
        {0, 1, 0, 2, 0, 3, 0, 2},
        {0, 1, 1, 1, 0, 1, 0, 0},
        {0, 0, 2, 0, 3, 4, 4, 3},
        {1, 0, 1, 1, 0, 1, 0, 0},
        {0, 0, 1, 3, 0, 4, 0, 1},
        {1, 0, 0, 0, 2, 2, 2, 1},
        {1, 5, 0, 6, 0, 1, 1, 0}};

    int QtdPec[6]={0,0,0,0,0,0};

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(xadrezTab[i][j]==1)
                QtdPec[0]++;
            else if(xadrezTab[i][j]==2)
                QtdPec[1]++;
            else if (xadrezTab[i][j]==3)
                QtdPec[2]++;
            else if (xadrezTab[i][j]==4)
                QtdPec[3]++;
            else if(xadrezTab[i][j]==5)
                QtdPec[4]++;
            else if (xadrezTab[i][j]==6)
                QtdPec[5]++;
        }
    }
    if(QtdPec[0]>0)
        printf("PEAO: %d peca(s)\n",QtdPec[0]);
    if(QtdPec[1]>0)
        printf("CAVALO: %d peca(s)\n",QtdPec[1]);
    if(QtdPec[2]>0)
        printf("TORRE: %d peca(s)\n",QtdPec[2]);
    if(QtdPec[3]>0)
        printf("BISPO: %d peca(s)\n",QtdPec[3]);
    if(QtdPec[4]>0)
        printf("REI: %d peca(s)\n",QtdPec[4]);
    if(QtdPec[5]>0)
        printf("RAINHA: %d peca(s)\n",QtdPec[5]);

    return 0;
}
