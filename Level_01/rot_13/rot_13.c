#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i])
        {
            if ((av[1][i] >= 'A' && av[1][i] <= 'M') || (av[1][i] >= 'a' && av[1][i] <= 'm'))
                av[1][i] += 13;
            else if ((av[1][i] >= 'N' && av[1][i] <= 'Z') || (av[1][i] >= 'n' && av[1][i] <= 'z'))
                av[1][i] -= 13;
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}

// --- Otra solución --- //

/* void rot_13(char *str)
{
	int i = 0;
	char out;

	if (!str)
		return;
	while (str[i])
	{
		out = str[i];
		if (str[i] >= 'a' && str[i] <= 'z')
			out = (str[i] - 'a' + 13) % 26 + 'a';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			out = (str[i] - 'A' + 13) % 26 + 'A';
		write(1, &out, 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 1;
	if (ac != 2)
		return (write(1, "\n", 1), 0);
	rot_13(av[i]);
	write(1, "\n", 1);
	return (0);
} */