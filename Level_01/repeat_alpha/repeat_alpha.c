#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int j;
        int i = 0;
        while (av[1][i])
        {
            j = 1;
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                j = av[1][i] - 96;
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                j = av[1][i] - 64;
            while (j >= 1)
            {
                write(1, &av[1][i], 1);
                j--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}

// --- Otra solución. --- //
/* void repeat_alpha (char *str)
{
	int i = 0;
	int j = 0;
	char out;

	if (!str)
	{
		write(1, "\n", 1);
		return;
	}
	while (str[i])
	{
		out = str[i];
		if (out >= 'a' && out <= 'z')
		{
			j = out;
			while (j > 'a')
			{
				write(1, &out, 1);
				j--;
			}
		}
		else if (out >= 'A' && out <= 'Z')
		{
			j = out;
			while (j > 'A')
			{
				write(1, &out, 1);
				j--;
			}
		}
		write(1, &out, 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (write(1, "\n", 1), 0);
	repeat_alpha(av[1]);
	write(1, "\n", 1);
	return 0;
} */