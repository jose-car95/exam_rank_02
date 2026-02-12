#include <stdlib.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t len = 0;

    while (s[len])
        len++;
    while (s[i])
    {
        if (s[i] == reject[0])
            return (i);
        i++;
    }
    return (len);
}