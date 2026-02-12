char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	if (!s2)
		return 0;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return s1;
}

/* #include <stdio.h>

int main()
{
	char *s1;
	char *s2 = "Hola";

	ft_strcpy(s1, s2);
	printf("%s\n", s1);
	return 0;
} */