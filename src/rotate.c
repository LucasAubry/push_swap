#include "./Libft/libft.h"

void rotate(x_list **head, char name)
{
	x_list *last;

	if(!*head)
		return ;
	last = ft_lstlast(*head);
	last->next = *head;
	*head = (*head)->next;
	ft_printf("r%c\n", name);
}
//decale tout dune case le premier element devient le dernier

/*ft_lstadd_front 
c une fonction qui cree un nouveaux maillon au debut 
de ma list chaiee*/