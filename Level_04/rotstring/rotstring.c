#include <unistd.h>

int ft_isspace(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return 1;
    return 0;
}

void rostring(char *s)
{
    int i = 0;
    int start = 0;
    int printed = 0;

    // saltamos los espacios iniciales
    while (s[i] && ft_isspace(s[i]))
        i++;

    // guardo el inicio de la primera palabra
    start = i;

    // avanzo hasta el final de la primera palabra
    while (s[i] && !ft_isspace(s[i]))
        i++;
    
    // Imprimo el resto de las palabras
    while (s[i])
    {
        //siempre que encuentre espacios los voy saltando
        while (s[i] && ft_isspace(s[i]))
            i++;
        // sienpre que sea diferente de espacio voy escribiendo la palabra
        while (s[i] && !ft_isspace(s[i]))
        {
            write(1, &s[i], 1);
            i++;
            printed = 1;
        }
        if (s[i])
            write(1, " ", 1);
    }

    // imprimir espacio antes de la primera palabra
    if (printed)
        write (1, " ", 1);
    // imprimir la primera palabra
    while (s[start] && !ft_isspace(s[start]))
    {
        write(1, &s[start], 1);
        start++;
    }
}

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        rostring(av[1]);
    }
    write(1, "\n", 1);
    return 0;
}