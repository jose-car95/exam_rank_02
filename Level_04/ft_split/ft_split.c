#include <stdlib.h>

int ft_is_space(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return 1;
    return 0;
}

int count_words(char *str)
{
    int count = 0, i = 0;

    while (str[i])
    {
        while (str[i] && ft_is_space(str[i]))
            i++;
        if (str[i])
        {
            count++;
            while(str[i] && !ft_is_space(str[i]))
                i++;
        }
    }
    return count;
}

char *copy_word(char *str)
{
    int len = 0;
    int i = 0;
    char *word;

    while (str[len] && !ft_is_space(str[len]))
        len++;
    
    word = (char *)malloc(len + 1);
    if (!word)
        return NULL;
    
    while (i < len)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';

    return word;
}

char **ft_split(char *str)
{
    char **res;
    int i = 0;
    int j = 0;
    int words;

    words = count_words(str);

    res = (char **)malloc(sizeof(char *) * (words + 1));
    if (!res)
        return NULL;
    
    while (str[i])
    {
        while (str[i] && ft_is_space(str[i]))
            i++;
        if (str[i])
        {
            res[j] = copy_word(&str[i]);
            j++;
            while (str[i] && !ft_is_space(str[i]))
                i++;
        }
    }
    res[j] = NULL;
    return res;
}