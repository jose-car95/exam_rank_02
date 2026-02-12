#include <unistd.h>

int ft_isspace(char c)
{
    if (c == 9 || c == 32)
        return 1;
    return 0;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;

        while (av[1][i] && ft_isspace(av[1][i]))
            i++;
            
        while (av[1][i])
        {
            if (ft_isspace(av[1][i]))
            {
                while (ft_isspace(av[1][i]))
                    i++;
                if (av[1][i])
                {
                    ft_putchar(' ');
                    ft_putchar(' ');
                    ft_putchar(' ');
                }
            }
            else
            {
                ft_putchar(av[1][i]);
                i++;
            }
        }
    }
    ft_putchar('\n');
    return 0;
}