#include <stdio.h>
#include <stdlib.h>

void multiplyMatrix(int **A, int **B, int **C, int nRowsA, int nColsA, int nColsB)
{
    int i = 0, j = 0, k = 0, sum = 0;

    for (i = 0; i < nRowsA; i++)
    {
        for (j = 0; j < nColsB; j++)
        {
            for (k = 0; k < nColsA; k++)
            {
                sum = (A[i][k] * B[k][j]) + sum;
            }
            C[i][j] = sum;
            sum = 0;
        }
    }
}

int main(void)
{

    int **a, **b, **c;
    int nRowsA = 3, nColsA = 3, nRowsB = nColsA, nColsB = 3; // números para exemplo e supondo que número de linhas de B = número de colunas de A
    int i = 0, j = 0;

    // alocação de memória de cada matriz (A, B, C) usando um ponteiro para pointeiro e uma única chamada de malloc para todas as linhas
    a = (int **)malloc(nRowsA * sizeof(int *));
    b = (int **)malloc(nRowsB * sizeof(int *));
    c = (int **)malloc(nRowsA * sizeof(int *));

    a[0] = (int *)malloc(nRowsA * nColsA * sizeof(int));
    b[0] = (int *)malloc(nRowsB * nColsB * sizeof(int));
    c[0] = (int *)malloc(nRowsA * nColsB * sizeof(int));

    for (i = 0; i < nRowsA; i++)
    {
        a[i] = (*a + nColsA * i);
    }

    for (i = 0; i < nRowsA; i++)
    {
        b[i] = (*b + nColsA * i);
    }

    for (i = 0; i < nRowsA; i++)
    {
        c[i] = (*c + nColsA * i);
    }

    for (i = 0; i < nRowsA; i++)
    {
        for (j = 0; j < nColsA; j++)
        {
            a[i][j] = i * j; // para exemplo
        }
    }

    for (i = 0; i < nRowsB; i++)
    {
        for (j = 0; j < nColsB; j++)
        {
            b[i][j] = i * j; // para exemplo
        }
    }

    multiplyMatrix(a, b, c, nRowsA, nColsA, nColsB);

    // imprime a matriz C
    for (i = 0; i < nRowsA; i++)
    {
        for (j = 0; j < nColsB; j++)
        {
            printf(" %d ", c[i][j]);
        }
        printf("\n");
    }

    // libera a memória dos vetores usados
    free(a[0]);
    free(b[0]);
    free(c[0]);

    free(a);
    free(b);
    free(c);

    return 0;
}