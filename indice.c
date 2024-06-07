#include <stdio.h>
#include <string.h>
int main ()
{
    int indice[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    char fraseUser[21];
    char caracterUser;

    printf("Digite uma frase:\n");
    gets(fraseUser);

    printf("Digite uma letra:\n");
    scanf("%c",&caracterUser);

    printf("Indices onde ocorrem o caractere %c:\n",caracterUser);
    for(int i=0;i<strlen(fraseUser);i++)
    {
        if (fraseUser[i]==caracterUser)
            printf("%d  ",indice[i]);
    }
    return 0;
}
