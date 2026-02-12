#include <unistd.h>

unsigned int ft_atoi(char *str)
{
    unsigned int i = 0, res = 0;

    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        res = (res * 10) + str[i] - '0';
        i++;
    }
    return (res);
}

void ft_puthex(int n)
{
    if (n >= 16)
        ft_puthex(n / 16);
    write(1, &"0123456789abcdef"[n % 16], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        ft_puthex(ft_atoi(av[1]));
    write(1, "\n", 1);
    return 0;
}