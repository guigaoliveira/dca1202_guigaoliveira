#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void sort(float *arr, int len)
{
    int i = 0, j = 0, aux = 0;
    for (i = len - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

void printArrayFloat()
{
    float *arr;

    int i = 0, j = 0, len = 0;

    clock_t t;

    printf("Entre com o tamanho do vetor: ");

    scanf("%d", &len);

    arr = (float *)malloc(len * sizeof(float));

    if (!arr)
    {
        printf("Erro: não é possível alocar memória.");
        return;
    }

    for (i = 0; i < len; i++)
    {
        scanf("%f", &arr[i]);
    }

    t = clock();
    qsort(arr, len, sizeof(float), compare);
    printf("Tempo usando a função qsort (do C):%f", (clock() - t) / (double)CLOCKS_PER_SEC);

    printf("\nResultado usando a função qsort (do C): ");
    for (i = 0; i < len; i++)
    {
        printf("%f ", arr[i]);
    }

    t = clock();
    sort(arr, len);
    printf("\nTempo usando a função sort (criada pelo aluno):%f", (clock() - t) / (double)CLOCKS_PER_SEC);

    printf("\nResultado usando a função sort (criada pelo aluno): ");
    for (i = 0; i < len; i++)
    {
        printf("%f ", arr[i]);
    }

    free(arr);
}

int main(void)
{
    printArrayFloat();
    return 0;
}