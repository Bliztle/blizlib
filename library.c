#include "library.h"
#include <stdlib.h>
#include <stdio.h>

void* bmalloc(size_t size) {
    void* mem = malloc(size);
    if (mem == NULL) {
        printf("Out of memory");
        exit(EXIT_FAILURE);
    }
    return mem;
}