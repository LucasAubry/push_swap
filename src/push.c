#include "./Libft/libft.h"

void push (x_list **head_a, x_list **head_b, char name)
{
	if (!*head_b)
		return ;
	ft_lstadd_front(head_a, *head_b);
	*head_b = (*head_b)->next;
	ft_printf("p%c\n", name);
}

/*
qund on va appeler cette fonction s on veux pa on met a dans head_a
et b dans Head_b en locurance si on veux push_b on va inverser 
comme ca ca push mais ivrse et name c pour dire si c a ou b 
pour que ca print pa ou pb  
ft_lstadd_front 
c une fonction qui cree un nouveaux maillon au debut 
de ma list chaiee*/
