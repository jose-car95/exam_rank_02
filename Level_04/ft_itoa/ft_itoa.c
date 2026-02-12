#include <stdlib.h>

char *ft_itoa(int nbr)
{
    long n;
    int len;
    char *str;

    n = nbr;
    len = 0;

    // n = -42 
    // dejamos espacio para el -
    if (n <= 0)
        len++;
    // contar los digitos -> n = -42 / 10 = -4 (len = 2) -> n = -4 / 10 = 0 (len = 3)
    // "-" "4" "2"
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    str = malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    // meto nulo en el ultimo caracter
    str[len] = '\0';
    // restauro n
    n = nbr;
    // si n es negativo str[0] = '-'
    // n -> -42 -> n = -n -> 42 (n *= -1)
    if (n < 0)
    {
        str[0] = '-';
        n *= -1;
    }
    //estado actual:
    // ['-'] [?] [?] ['\0']
    if (n == 0)
        str[0] = '0';
    // rellenamos los digitos
    while (n > 0)
    {
        str[--len] = (n % 10) + '0'; // str[2] = '2' <- 42 % 10 = 4 -> sobra el 2 ['-'] [?] ['2'] ['\0']
        n /= 10;
    }
    return (str);
}