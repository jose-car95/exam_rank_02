#include <unistd.h>

int ft_isspace(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return 1;
    return 0;
}

void ft_res_wstr(char *str)
{
    int i = 0;
    int end = 0;
    
    // Recorro la string hasta el final
    while (str[i])
        i++;
    
    // recorro hacia atras
    while (i > 0)
    {
        //saltar espacios
        while (i > 0 && ft_isspace(str[i - 1]))
            i--;
        
        end = i;

        // ir al inicio de la palabra
        while (i > 0 && !ft_isspace(str[i - 1]))
            i--;
        
        // imprimir la palabra
        write(1, &str[i], end - i);

        // si quedan palabras pongo espacio
        if (i > 0)
            write(1, " ", 1);
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        ft_res_wstr(av[1]);
    }
    write(1, "\n", 1);
    return (0);
}