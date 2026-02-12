void sort_int_tab(int *tab, unsigned int size)
{
    int tmp;
    unsigned int i;
    unsigned int swapped;

    if (size < 2)
        return ;
    
    swapped = 1;
    while (swapped)
    {
        swapped = 0;
        i = 0;
        while (i < size - 1)
        {
            if (tab[i] > tab[i + 1])
            {
                tmp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tmp;
                swapped = 1;
            }
            i++;
        }
    }
}