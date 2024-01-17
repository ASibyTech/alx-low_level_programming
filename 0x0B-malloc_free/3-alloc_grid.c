#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2-dimensional array of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: A pointer to the 2-dimensional array of integers.
 *         NULL on failure or if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
    int **grid;

    int i, j;
    /* Check for invalid width or height */
    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }
    /* Allocate memory for the rows */
    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
    {
        return (NULL);
    }
    /* Allocate memory for the columns of each row */
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            /* Free previously allocated memory on failure */
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }
    }
    /* Initialize each element to 0 */
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            grid[i][j] = 0;
        }
    }
    return (grid);
}

