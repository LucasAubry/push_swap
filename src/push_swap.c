#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int 	i;
	x_list	**stack_a;
	x_list	**stack_b;

	i = 1;
	stack_a = malloc(sizeof(x_list *));
	*stack_a = NULL;
	while (i < argc)
	{
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	ft_verif(*stack_a, *stack_b);

/*ft_lstadd _back va metre lelemtn que lon a cree grace a lst new 
au denrer maillon de la list chainer
&stack_a c le nom de la list chainer*/

	i = 0;
	while (i < argc)
	{
		ft_printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}


/*int main(int argc, char *argv[])
{
	int i = 0;
	printf("nombre d'argument ; %d\n", argc);
	while (i < argc)1
	{
		printf("argument %d : %s\n", i, argv[i]);
		i++;
	}
	return (0);
}*/
// malloc ma list chainer 
//transphere argv dans une liste chainer 
//faire un atoil parce que si on donne un nombre 
