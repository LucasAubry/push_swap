#include "./Libft/libft.h"

void reverse_rotate(x_list **head, char name)
{
    x_list *last;
    x_list *current;

    if (!*head || !(*head)->next)
        return;
    last = *head;
    current = *head;
    while (last->next)
    {
        current = last;
        last = last->next;
    }
    current->next = NULL;
    last->next = *head;
    *head = last;
    ft_printf("rr%c\n", name);
}