#include "gc.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n = 1000;
    clock_t t;
    GC_INIT();

    t = clock();

    int *p = (int *)GC_MALLOC(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        p[i] = i * i;
    }

    printf("Tempo alocando com a libgc: %f", (clock() - t) / (double)CLOCKS_PER_SEC);

    t = clock();
    int *q = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        q[i] = i * i;
    }

    free(q);

    printf("\nTempo alocando com malloc e free: %f\n", (clock() - t) / (double)CLOCKS_PER_SEC);

    return 0;
}
