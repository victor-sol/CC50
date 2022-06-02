#include <stdio.h>
#include "../cs50/cs50.h"

int imprimeQuantidadeDeHashTag(int altura)
{
    for (int quantidadeDeHashTag = altura + 1; quantidadeDeHashTag > 0; quantidadeDeHashTag--)
    {
        printf("#");
    }
}

int imprimeQuantidadeDeEspacos(int tamanho, int altura)
{
    for (int quantidadeEspacos = tamanho - altura; quantidadeEspacos > 0; quantidadeEspacos--)
    {
        printf(" ");
    }
}

int perguntaTamanhoPiramide()
{
    int tamanhoPiramide = get_int("Tamanho: ");
}

int main(void)
{

    int tamanho = perguntaTamanhoPiramide();

    for (int altura = 0; altura < tamanho; altura++)
    {
        imprimeQuantidadeDeEspacos(tamanho, altura);

        imprimeQuantidadeDeHashTag(altura);

        printf("\n");
    }
}