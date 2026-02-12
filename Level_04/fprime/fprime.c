#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i;
    int n;

    if (ac == 2)
    {
        i = 2;
        n = atoi(av[1]);
        if (n == 1)
            printf("1");
        while (i <= n)
        {
            if (n % i == 0)
            {
                printf("%d", i);
                if (i != n)
                    printf("*");
                n = n / i;
            }
            else
                i++;
        }
    }
    printf("\n");
    return (0);
}