#include <unistd.h>

int main(int ac, char **a)
{
    if (ac == 3)
    {
        int i = 0;
        int j = 0;
        while (a[1][i] && a[2][j])
        {
            if (a[1][i] == a[2][j])
                i++;
            j++;
        }
        if (a[1][i] == '\0')
            write(1, a[1], i);
        
    }
    write(1, "\n", 1);
    return 0;
}