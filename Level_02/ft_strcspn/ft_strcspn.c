#include <stdlib.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0; // para s
    size_t j; // para reject

    while (s[i])
    {
        j = 0;
        while (reject[j])
        {  
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}