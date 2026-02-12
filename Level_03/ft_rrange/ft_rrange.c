#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int len;
    int i = 0;

    if (start <= end)
        len = end - start + 1;
    else
        len = start - end + 1;

    int *array = (int *)malloc(len * sizeof(int));

    while (end >= start)
    {
        array[i] = end;
        i++;
        end--;
    }
    return (array);
}
