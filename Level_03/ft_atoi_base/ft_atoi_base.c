int char_to_value(char c)
{
    char *base = "0123456789abcdef";
    int indice = 0;

    if (c >= 'A' && c <= 'F')
        c += 32;
        
    while (base[indice])
    {
        if (base[indice] == c)
            return indice;
        indice++;
    }
    return -1;
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0, res = 0, sign = 1, value;

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    
    while ((value = char_to_value(str[i])) >= 0 && value < str_base)
    {
        res = (res * str_base) + value;
        i++;
    }
    return (res * sign);
}
/* #include <stdio.h>
int main()
{
    printf("%d\n", ft_atoi_base("0001", 2));
} */