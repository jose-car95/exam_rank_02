#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;


void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *curr;
    t_list *prev;
    t_list *tmp;

    prev = NULL;
    curr = *begin_list;

    if (cmp(curr->data, data_ref) == 0)
    {
        tmp = curr;
        if (prev == NULL)
            *begin_list = curr->next;
        else
            prev->next = curr->next;
        curr = curr->next;
        free(tmp);
    }
}