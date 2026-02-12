#include <unistd.h>

void ft_putnbr(int n)
{
    if (n >= 10)
        ft_putnbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int main(int ac, char **av)
{
    if (ac == 1)
        return (write(1, "0\n", 2), 0);
    
    int i = 1;
    int count = 0;
    while (av[i])
    {
        i++;
        count++;
    }
    ft_putnbr(count);
    write(1, "\n", 1);

    return 0;
}