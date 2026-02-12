typedef struct s_list t_list;

struct s_list {
    int data;
    t_list *next;
};

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int tmp;
    int swapped;
    t_list *ptr;

    if (!lst)
        return lst;
    swapped = 1;
    while (swapped)
    {
        swapped = 0;
        ptr = lst;
        while (ptr->next)
        {
            if (cmp(ptr->data, ptr->next->data) == 0)
            {
                tmp = ptr->data;
                ptr->data = ptr->next->data;
                ptr->next->data = tmp;
                swapped = 1;
            }
            ptr = ptr->next;
        }
    }
    return lst;
}


