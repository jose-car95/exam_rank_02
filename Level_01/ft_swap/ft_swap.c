void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/* #include <stdio.h>
int main()
{
	int a = 9, b = 6;

	ft_swap(a, b);
	printf("%d - %d", a, b);
} */