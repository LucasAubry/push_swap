#include "push_swap.h"

//lui envoyer stack il va stocker les index de chaque stack;
void set_index(t_list *stack)
{
	int i;

	i = 0;
	while (stack)
	{
		stack->index = i;
		stack = stack->next;
		i++;
	}
}
// ou va mon index(pille b) dans ma pille a (target)
// ma target c la position ou va un node de b dans a
void set_target(t_list *stack_a, t_list *node_b)
{
	t_list	*result;

	result = stack_a;
	while (stack_a)
	{
		if (stack_a->content > node_b->content
			&& stack_a->content < result->content)
				result = stack_a;
		stack_a = stack_a->next;
	}
	node_b->target = result;
}

// permet de boucler sur toute la pille pour set_target
void get_target(t_list *stack_a, t_list *stack_b)
{
	while (stack_b)
	{
		set_target(stack_a, stack_b);
		stack_b = stack_b->next;
	}
}

// le prix c le nbm de coup pour lamener en haut (pille_b)
// et apres pille_a 
void set_price(t_list *stack_a, t_list *stack_b)
{
	le price c la position - le totale 
	et si le node est  dessu ou dessou de find_size_stack / 2
	rr ou r  
}
comparer les prix de chaque node 
et je lexecute le moins chere
et je recommance jusqua ce que je nest plus rien dans b 



find_max_size / 2
