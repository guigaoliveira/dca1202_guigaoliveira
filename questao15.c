#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b); // converte os ponteiros a e b para o tipo inteiro depois os valores são subtraídos
}

void printArrayFloat()
{
    float *arr;

    int i = 0, j = 0, len = 0;

    printf("Entre com o tamanho do vetor: ");

    scanf("%d", &len); // o usuário insere o tamanho do vetor

    arr = (float *)malloc(len * sizeof(float)); // o vetor de floats é alocado

    if (!arr)
    {
        printf("Erro: não é possível alocar memória.");
        return;
    }

    for (i = 0; i < len; i++)
    {
        scanf("%f", &arr[i]);
    } // o usuário insere os floats no vetor alocado

    qsort(arr, len, sizeof(float), compare);

    /* 

    Ordena o vetor.

    void qsort (void* base, size_t num, size_t size, int (*compar)(const void*,const void*));

    base = passar o vetor
    num = tamanho do vetor
    size = tamanho em bytes de cada elemento do array
    compar = função de comparação

    A função de comparação recebe dois enderenços de elementos do array que é chamada dentro da função qsort. Supondo que qsort recebe os ponteiros a e b que apontam pra um elemento X e outro Y do array, se o valor de X - valor de Y > 0 então o elemento X irá ficar atrás de Y, se for igual a 0 nada acontece, se for maior que 0 o elemento X irá ficar na frente de Y.

    Referência: http://www.cplusplus.com/reference/cstdlib/qsort/

    */

    printf("Resultado: ");

    for (i = 0; i < len; i++)
    {
        printf("%f ", arr[i]);
    } // imprime valores do vetor

    free(arr); // libera vetor de floats alocado
}

int main(void)
{
    printArrayFloat();
    return 0;
}