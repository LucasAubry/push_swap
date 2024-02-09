#include "push_swap.h"
// moitier haute
void up(t_list *stack_a, t_list *stack_b, int posi)
{
	long i;

	i = 0;
	while (i != posi)
	{
		rotate(&stack_b, 'b');
		i++;
	}
	push(&stack_a, &stack_b, 'a');
}

// moitier basse
void down(t_list *stack_a, t_list *stack_b, int posi)
{
	long j;

	j = find_size_stack(stack_b); 
	while (j != posi - find_size_stack(stack_b))
	{
		reverse_rotate(&stack_b, 'b');
		j--;
	}
	push(&stack_a, &stack_b, 'a');
}
// le i rajout les mouvement qui faut pour la stack_b pour monter 
// le plus petit en haut mais il permet de donneer aussi la position
// dans la stack_b du plus petit 
//posi c la position du plus petit dans stack_b;

int find_the_closest_B(t_list *stack_a, t_list *stack_b)
{
	t_list *head;
	long place;
	int i;
	int posi;

	head = stack_b;
	place = 500;
	i = 0;
	posi = 0;
	while (stack_b)
	{
		if (place > stack_a->content - stack_b->content)
		{
			if (stack_a->content > stack_b->content)  
				place = stack_a->content - stack_b->content;
			else
				place = stack_b->content - stack_a->content;
			posi = i;
		}
		stack_b = stack_b->next;
		i++;
	}
	stack_b = head;
	return (posi);
}

void find_the_closest_A(t_list *stack_a, t_list *stack_b)
{
	int posi;
	t_list *head;

	posi = 0;

	head = stack_a;
	while (stack_a)
	{
		posi = find_the_closest_B(stack_a, stack_b);
		if (posi >= find_size_stack(stack_b))
			up(stack_a, stack_b, posi);
		else 
			down(stack_a, stack_b, posi);
		stack_a = stack_a->next;
	}
	stack_a = head;
}

