typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;

void fill(char **tab, t_point size, char target, int row, int col)
{
    // si me salgo del mapa paro
    if (row < 0 || col < 0 || row >= size.y || col >= size.x)
        return ;
    
    // si ya esta pintado o no es el caracter original paro
    if (tab[row][col] == 'F' || tab[row][col] != target)
        return ;

    // pinto la casilla
    tab[row][col] = 'F';

    // me muevo en las 4 direcciones
    fill(tab, size, target, row - 1, col);
    fill(tab, size, target, row + 1, col);
    fill(tab, size, target, row, col - 1);
    fill(tab, size, target, row, col + 1);

}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    char target = tab[begin.y][begin.x];
    fill(tab, size, target, begin.y, begin.x);
}