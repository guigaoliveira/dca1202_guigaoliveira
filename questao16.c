#include <stdio.h>
#include <stdlib.h>

int compare(float a, float b)
{
    return a > b;
}

void sort(float *arr, int len, int (*compar)(const float, const float))
{
    int i = 0, j = 0, aux = 0;
    for (i = len - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (compar(arr[j], arr[j + 1]))
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

    sort(arr, len, compare);

    printf("Resultado: ");

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