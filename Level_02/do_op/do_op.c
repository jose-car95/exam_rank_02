#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int n1 = 0;
	int n2 = 0;
	int nr = 0;

	if (ac == 4)
	{
		n1 = atoi(av[1]);
		n2 = atoi(av[3]);

		if (av[2][0] == '+')
			nr = n1 + n2;
		else if (av[2][0] == '-')
			nr = n1 - n2;
		else if (av[2][0] == '*')
			nr = n1 * n2;
		else if (av[2][0] == '/')
			nr = n1 / n2;
		else if (av[2][0] == '%')
			nr = n1 % n2;
		printf("%d\n", nr);
	}
	else
		write(1, "\n", 1);
	return (0);
}

// --- Otra solución --- //
/* 
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        switch (av[2][0])
        {
            case '+':
                printf("%d", atoi(av[1]) + atoi(av[3]));
                break;
            case '-':
                printf("%d", atoi(av[1]) - atoi(av[3]));
                break;
            case '*':
                printf("%d", atoi(av[1]) * atoi(av[3]));
                break;
            case '/':
                printf("%d", atoi(av[1]) / atoi(av[3]));
                break;
            case '%':
                printf("%d", atoi(av[1]) % atoi(av[3]));
                break;
        }
    }
    printf("\n");
} */