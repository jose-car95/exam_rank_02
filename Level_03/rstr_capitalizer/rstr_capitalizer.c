#include <unistd.h>

int ft_isspace(char c)
{
    if (c == 9 || c == 32 || c == 0)
        return 1;
    return 0;
}

int ft_tolower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int ft_ischar(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if (ac == 1)
        return (ft_putchar('\n'), 0);
    int i = 1;
    int j;
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            if (ft_tolower(av[i][j])) // hola MUNDO -> holA mundO
                av[i][j] += 32;
            if (ft_isspace(av[i][j + 1]) && ft_ischar(av[i][j]))
                av[i][j] -= 32;
            ft_putchar(av[i][j]);
            j++;
        }
        ft_putchar('\n');
        i++;
    }
    return 0;
}