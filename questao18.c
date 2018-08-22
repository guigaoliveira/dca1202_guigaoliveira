#include <stdio.h>
#include <stdlib.h>

void createSumVector(int *arr1, int *arr2, int *sumVec, int len)
{
    int i = 0;
    for (i = 0; i < len; i++)
    {
        sumVec[i] = arr1[i] + arr2[i];
    }
}

int main(void)
{
    int len = 0, i = 0, *arr1, *arr2, *sumVec;

    printf("Entre com o tamanho do vetor: ");

    scanf("%d", &len);

    arr1 = (int *)malloc(len * sizeof(int));
    arr2 = (int *)malloc(len * sizeof(int));
    sumVec = (int *)malloc(len * sizeof(int));

    if (!arr1 || !arr2 || !sumVec)
    {
        printf("Erro: não é possível alocar memória.");
        return -1;
    }

    printf("Primeiro vetor: ");

    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Segundo vetor: ");

    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr2[i]);
    }

    createSumVector(arr1, arr2, sumVec, len);

    printf("Vetor de soma: ");

    for (i = 0; i < len; i++)
    {
        printf(" %d ", sumVec[i]);
    }

    return 0;
}