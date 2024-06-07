#include <stdio.h>
int maior(int num1,int num2)
{
    if (num1>=num2)
        return num1;
    else
        return num2;
}
int main()
{
    int num1,num2;

    printf("Digite o numero 1:\n");
    scanf("%d",&num1);

    printf("Digite o numero 2:\n");
    scanf("%d",&num2);

    int resultado=maior(num1,num2);

    printf("O maior numero:%d\n",resultado);

    return 0;
}
