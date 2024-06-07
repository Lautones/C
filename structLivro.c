#include <stdio.h>

struct Livro
{
   int ano;
   char titulo[100];
   char autor[100];
   int nVolume; // Número de exemplares de um dado livro.
   float preco;
};

struct Livraria
{
   struct Livro V[100]; // Armazena a informação de n livros !!
   int nLivros; // Número de livros existentes na livraria.
};

struct Livro preencheLivro()
{
    struct Livro varLivro;

    printf("\nAno: ");
    scanf("%d",&varLivro.ano);
    printf("\nTitulo: ");
    scanf("%s",varLivro.titulo);
    printf("\nAutor: ");
    scanf("%s",varLivro.autor);
    printf("\nNumero do Volume:");
    scanf("%d",&varLivro.nVolume);
    printf("\nPreco: ");
    scanf("%f",&varLivro.preco);

    return varLivro;
};

void preencheLivraria(struct Livraria *liv, int numLivros)
{
   int i;

   liv->nLivros = numLivros;

   for (i=0;i<numLivros;i++)
      liv->V[i]=preencheLivro();
}

void mostraLivros(struct Livraria *liv, int numLivros){

}

int main()
{
    int qtlivros;
    struct Livraria livraria;

    printf("Informe a quantidade de livros:\n");
    scanf("%i",&qtlivros);

    preencheLivraria(&livraria, qtlivros);
    mostraLivros(&livraria, qtlivros);

    // chamar aqui função que RETORNE o custo da Livraria (soma dos valores dos livros)
    //  e exiba em tela.
    return 0;

}
