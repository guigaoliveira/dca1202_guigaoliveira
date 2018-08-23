/*
    Comandos utilizados, para instalar a lib, em /home (Ubuntu): 
    tar xvfz gc-7.6.4.tar.gz
    cd gc-7.6.4
    
    Criei o diretório /home/xyz/gc e 

    ./configure --prefix=/home/xyz/gc --disable-threads
    make
    make check
    make install

    na pasta do projeto (dca12012_guigaoliveira) executei 

    cc -I/home/xyz/gc/include questao20.c /home/xyz/gc/lib/libgc.a -o questao20

    ./questao20
*/

// Adaptei o exemplo do site http://www.hboehm.info/gc/simple_example.html, apenas para mostrar o valor inicial da heap no loop (não sou tão criativo)

#include "gc.h"
#include <assert.h>
#include <stdio.h>

int main()
{
    int i, n = 10000;
    size_t initial;

    GC_INIT();
    for (i = 0; i < n; ++i)
    {
        if (i == 0)
        {
            initial = GC_get_heap_size();
        }
        int **p = (int **)GC_MALLOC(sizeof(int *));
        int *q = (int *)GC_MALLOC_ATOMIC(sizeof(int));
        assert(*p == 0);
        *p = (int *)GC_REALLOC(q, n * sizeof(int));
        printf("Heap size = %zu\n", GC_get_heap_size());
    }
    printf("Heap size (initial) = %zu\n", initial);
    return 0;
}
