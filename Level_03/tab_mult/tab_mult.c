#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + str[i] - '0';
        i++;
    }
    return res;
}

void ft_putnbr(int n)
{
    if (n >= 10)
        ft_putnbr(n / 10);
    char c = (n % 10) + '0';
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac != 2)
        return (write(1, "\n", 1), 0);

    int i = 1;
    int j = ft_atoi(av[1]);

    while (i < 10)
    {
        ft_putnbr(i);
        ft_putstr(" x ");
        ft_putnbr(j);
        ft_putstr(" = ");
        ft_putnbr(i * j);
        write(1, "\n", 1);
        i++;
    }
}