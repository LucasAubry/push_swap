#include "./Libft/libft.h"

void swap(x_list **head, char name)
{
	x_list	*first;
	x_list	*second;
	int temp;

	temp = 0;
	first = *head;
	second = first->next;
	if (!second || !first)
		return ;
	temp = first->content;
	first = second->content;
	second->content = temp;
	ft_printf("s%c\n", name);
// print
}
/*
en gros se quon va faire c que 
quand on va metre a ou b ou s ca va changer se quon print 
psk en soi les swap c le meme 
pour le ss faut voir parcontre il faudrait desactiver le print
a la fin de la deuxieme execution pour le sb psk 
pour le ss on va fair sa et sb mais faut que sa qui printf ss et pas sb 
*/
