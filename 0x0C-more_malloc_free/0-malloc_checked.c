#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory and check for success
 * @b: size of memory to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
    void *i;

    i = malloc(b);
    if (i == NULL)
        exit(98);
    return (i);
}
