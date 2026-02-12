#include <stdlib.h>

int *ft_range(int start, int end)
{
    int len, step, i;
    int *range;

    if (start <= end)
        step = 1;
    else
        step = -1;

    len = (end - start) * step + 1;

    range = malloc(sizeof(int) * len);
    if (!range)
        return (NULL);

    i = 0;
    while (i < len)
    {
        range[i] = start + (i * step);
        i++;
    }

    return (range);
}

/* int *ft_range(int start, int end)
{
    int i = 0;
    int len = (end - start) < 0 ? ((end - start) * -1) + 1 : (end - start) + 1;
    int *range = (int *) malloc(len * sizeof(int));
    
    while (i < len)
    {
        if (start < end)
            range[i] = start++;
        else
            range[i] = start--;
        i++;
    }
    return (range);
} */