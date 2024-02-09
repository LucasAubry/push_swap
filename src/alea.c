ca c transformer les nombre en suite de nombre pour que ce soit
plus simple ;

-400
13
42
-50
12
1

1
5
6
2
4
3


redarder radix
ne pas faire radix psk c pour les nulos




changer les chiffre pour faire une suite :

2
3


5


6

3 442
-50
12
1

1
5
6
2
4
6 5
7 1

4
6
7
3

6
7
3
4

5
6
7
3
4

en gros :
on met 2 nombre aleatoir dans la pille B et le troisieme
c le chiffre le plus grand 
3
6
9

enssuite on prend le chiffre en haut de la pille la pille A
et on tourne la pile b (avec pa je crois )jusqua trouver
le chiffre le plus grand et le plus pres au dessu de lui
et limplement et inssi de suite 
a la fin qund la pille a est vide elle tourne la pille b 
(avec pa je crois) jusqua se que le chiffe le plus grand soit 
en dessou cella veux dire quil est trier



////////////////////////////////////////////////////////////

regarder quelle est le nombre le plus grand dans la pille A :


int find_max_size(x_list stack_a)
{
	t_list max;
	x_list tempo;
	tempo = stack_a;

	max = 0;
	while (tempo != NULL)
	{
		if(tempo > max)
			max = tempo->content;
		tempo = tempo->next;
	}
	return max;
}




prendre les deux premier chiffre dans A et le metre dans B 
mettre le plus grand en dernier dans B :


void put_in_B(x_list stack_a, x_list stack_b)
{
	int max

	push (stack_b, stack_a ,'b');
	push (stack_b, stack_a ,'b');
	max = find_max_size(stack_a);
	while (stack_a->content != max)
		rotate(stack_a, 'a');
	push (stack_b, stack_a,'b');
}




trier la pil b : 
pour trier utiliser dinomalin en 2 mouve

void tri_b(x_list stack_b)
{
	int max;

	max = find_max_size(stack_b)
	if (*stack_b == max)
		rotate(stack_b ,'b');
	else if ((*stack_b)->next == max)
		reverse_rotate(stack_b ,'b');
	if ((*stack_b)->content > (*stack_b)->next->content)
		swap(stack_b ,'b');	
}






on prend le premier chiffre dans A et on regarde de quelle chiffre 
il se rapproche le plus dans B et on le met dans B
on tourne avec ra je crois : 





