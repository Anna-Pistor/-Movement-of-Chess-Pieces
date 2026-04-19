#include <stdio.h>
void movertorre(int casas)
{
    if (casas > 0)
    {
        printf("direita\n");
        movertorre(casas - 1);
    }
}

void moverbispo(int casas)
{
    if (casas > 0)
    {
        for (int b = 0; b < 1; b++)
        {
            printf("cima,");
        }
        printf("direita\n");
        moverbispo(casas - 1);
    }
}

void moverrainha(int casas)
{
    if (casas > 0)
    {
        printf("esquerda\n");
        moverrainha(casas - 1);
    }
}

int main()
{

    // movendo a torre
    printf("movendo torre:\n");
    movertorre(5);

    // movendo o bispo
    printf("\nmovendo o bispo:\n");
    moverbispo(5);

    // movendo a rainha
    printf("\nmovendo a rainha:\n");
    moverrainha(8);

    // movendo o cavalo em L

    printf("\nmovendo o cavalo:\n");
    for (int c = 0; c < 2; c++)
    {
        printf("cima,");

        if (c < 1)
        {
            continue;
        }
        for (int v = 0; v < 1; v++)
        {
            printf("direita\n");
        }
    }

    return 0;
}