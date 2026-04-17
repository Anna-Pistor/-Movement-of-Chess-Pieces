#include <stdio.h>
int main()
{

    // movendo a torre com for
    printf("movendo torre:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("direita\n");
    }

    // movendo o bispo com while
    printf("\nmovendo o bispo\n");
    int b = 0;
    while (b < 5)
    {
        printf("cima, direita\n");
        b++;
    }

    // movendo a rainha com while-do
    printf("\nmovendo a rainha:\n");
    int r = 0;
    do
    {
        printf("esquerda\n");
        ++r;
    } while (r < 8);

    // movendo o cavalo em L com for e while

    printf("\nmovendo o cavalo:\n");
    for (int c = 0; c < 2; c++)
    {
        printf("baixo\n");
    }

    int c = 0;
    while (c < 1)
    {
        printf("esquerda");
        ++c;
    }

    return 0;
}