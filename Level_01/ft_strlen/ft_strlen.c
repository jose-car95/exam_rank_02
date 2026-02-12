int ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return (len);
}

/* #include <stdio.h>
int main (int ac, char **av)
{
	printf("%d\n", ft_strlen(av[1]));
	return 0;
} */