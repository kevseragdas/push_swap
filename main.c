#include "push_swap.h"

static void add_back(t_list *node, t_list **stack_a)
{ 
	t_list *temp;

	temp = *stack_a;
	if(*stack_a == NULL)
	{
		(*stack_a) = node;
		node->next = NULL;
		return;
	}
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = node;
	node->next = NULL;

}

static void free_stack(t_list **stack)
{
	t_list *tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

void    ft_exit(t_list **stack, char **new)
{
	if (new)
		ft_free(new); 
	free_stack(stack);
	write(2,"Error\n",6);
	exit(1);
}   
static void    make_number(char **arg, t_list **stack)
{
	int i;
	int j;
	char **new;
	t_list *node;

	i = 0;
	while(arg[++i])
	{
		new = ft_split(arg[i], ' ');
		if(!new || !new[0])
			ft_exit(stack, new);
		if(!is_digit(new))
			ft_exit(stack, new);
		j = -1;
		while(new[++j])
		{
			node = malloc(sizeof(t_list));
			if(!node)
				ft_exit(stack, new);
			node->value = is_long(node, new, j, stack);
			add_back(node, stack);
		}
		ft_free(new);
	}
}

int main(int ac, char **arg)
{
	t_list * stack_a = NULL;
	t_list * stack_b = NULL;
	int s_stack;
	
	if(ac == 1)
		return(0);
	make_number(arg, &stack_a);
	if(!is_repeat(stack_a))
	{
		free_stack(&stack_a);
		write(2,"Error\n",6);
		exit(1);
	}
	s_stack = stack_size(stack_a);
	if(!is_sorted(stack_a))
	{
		free_stack(&stack_a);
		exit(0);
	}
	acnumctl(s_stack, &stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
}
