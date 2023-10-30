#include "main.h"
#include <stdlib.h>

/**
 *  * free_grid - Frees the memory allocated by alloc_grid
 *   * @grid: The 2D grid to be freed
 *    * @height: The height of the grid
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
return;
for (i = 0; i < height; i++)
{
if (grid[i] != NULL)
free(grid[i]);
}
free(grid);
}
