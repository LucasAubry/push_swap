#include "push_swap.h"

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
		while (stack_b->next)
		{
			if (place + i > stack_a->content - stack_b->content)
			{
				place = stack_a->content - stack_b->content;
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
	while (stack_a->next)
	{
		posi = find_the_closest_B(stack_a, stack_b);
		stack_a = stack_a->next;
	}
	stack_a = head;
}





// void up_or_low (t_list *stack_a, t_list *stack_b)
// {
// 	if
// }


