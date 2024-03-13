#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog
 * @d: Pointer to the dog structure to free
 */
void free_dog(dog_t *d)
{
    if (d == NULL)
        return;

    /* Free the memory allocated for the name string */
    if (d->name != NULL)
        free(d->name);

    /* Free the memory allocated for the owner string */
    if (d->owner != NULL)
        free(d->owner);

    /* Free the memory allocated for the dog structure */
    free(d);
}

