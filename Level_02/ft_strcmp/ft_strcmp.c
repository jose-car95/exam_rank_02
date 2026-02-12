int ft_strcmp(char *s1, char *s2)
{
    int i = 0; // para s1
    int j = 0; // para s2

    while (s1[i] || s2[j])
    {
        if (s1[i] != s2[j])
            return (s1[i] - s2[j]);
        i++;
        j++;
    }
    return (0);
}