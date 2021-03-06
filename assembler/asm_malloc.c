#include <stdlib.h>

#include "asm_malloc.h"
#include "exit.h"


void *asm_malloc(size_t size)
{
    void *ptr = malloc(size);

    if (ptr == NULL) {
        exit_program(EXIT_OUT_OF_MEMORY);
    }

    return ptr;
}

void *asm_realloc(void *ptr, size_t size)
{
    void *tmp = realloc(ptr, size);

    if (tmp == NULL) {
        exit_program(EXIT_OUT_OF_MEMORY);
    }

    ptr = tmp;
    return ptr;
}
