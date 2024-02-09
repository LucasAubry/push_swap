// #include "push_swap.h"
// // moitier haute
// void up(t_list *stack_a, t_list *stack_b, int posi)
// {
// 	long i;

// 	i = 0;
// 	(void) posi;
// 	(void) stack_b;
// 	while (i != posi)
// 	{
// 		rotate(&stack_b, 'b');
// 		i++;
// 	}
// 	push(&stack_a, &stack_b, 'a');
// }

// // moitier basse
// void down(t_list *stack_a, t_list *stack_b, int posi)
// {
// 	long j;

// 	j = find_size_stack(stack_b); 
// 	while (j != posi - find_size_stack(stack_b))
// 	{
// 		reverse_rotate(&stack_b, 'b');
// 		j--;
// 	}
// 	push(&stack_a, &stack_b, 'a');
// }



// void mouve_stack_a(t_list *stack_a, int place_sa)
// {
// 	while (place_sa > 0)
// 		rotate(&stack_a, 'a');
// 	return ;
// }



// // le i rajout les mouvement qui faut pour la stack_b pour monter 
// // le plus petit en haut mais il permet de donneer aussi la position
// // dans la stack_b du plus petit 
// //posi c la position du plus petit dans stack_b;


// //regarde avec les caracteres de b un par un la differance 
// // a la fin il va return que selui qui a la plus petit diff
// int posi_of_diff(t_list *stack_a, t_list *stack_b)
// {
// 	t_list *head;
// 	long place;
// 	int i;
// 	int posi;

// 	head = stack_a;
// 	place = 500;
// 	i = 0;
// 	posi = 0;
// 	while (stack_a)
// 	{
// 		if (place > stack_a->content - stack_b->content)
// 		{
// 			if (stack_a->content > stack_b->content)  
// 				place = stack_a->content - stack_b->content;
// 			else
// 				place = stack_b->content - stack_a->content;
// 			posi = i;
// 		}
// 		stack_a = stack_a->next;
// 		i++;
// 	}
// 	stack_a = head;
// 	return (posi);
// }





// void find_the_closest_A(t_list *stack_a, t_list *stack_b)
// {
// 	int posi;
// 	int place_sa;
// 	t_list *head;

// 	posi = 0;
// 	place_sa = 0;
// 	head = stack_a;
// 	while (stack_a)
// 	{
// 		if (posi_of_diff(stack_a, stack_b) < posi + place_sa)
// 		{
// 			place_sa++;
// 			posi = place_sa = posi_of_diff(stack_a, stack_b);
// 		}
// 		if (place_sa > 0)
// 		{s
// 			mouve_stack_a(stack_a, place_sa);
// 			place_sa = 0;
// 		}
// 		if (posi >= find_size_stack(stack_b))
// 			up(stack_a, stack_b, posi);
// 		else 
// 			down(stack_a, stack_b, posi);
// 		stack_a = stack_a->next;
// 	}
// 	stack_a = head;
// }