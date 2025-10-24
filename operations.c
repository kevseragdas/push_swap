#include "push_swap.h"

void  pa(t_list **stack_a, t_list **stack_b)
{
	t_list *first_b;
	
	if(!*stack_b)
		return;
  
	first_b = *stack_b;
	*stack_b = (*stack_b)->next;

	first_b->next = *stack_a;
	*stack_a = first_b;
	write(1,"pa\n",3);
}

void pb(t_list **stack_a, t_list **stack_b)
{
	t_list *first_a;
	
	if(!*stack_a)
		return;
	first_a = *stack_a;
	*stack_a = (*stack_a)->next;

	first_a->next = *stack_b;
	*stack_b = first_a;
	write(1,"pb\n",3);
}

void    sa(t_list **stack_a)
{
	t_list *first_a;

	 if (!*stack_a || !(*stack_a)->next)
		return;
	first_a = *stack_a;
	*stack_a = (*stack_a)->next;
	first_a->next = (*stack_a)->next;
	(*stack_a)->next = first_a;
	write(1,"sa\n",3);
}

void    rra(t_list **stack_a)
{
	t_list *temp;
	t_list *last;

	temp = *stack_a;
	while(temp->next->next != NULL)
		temp = temp->next;

	last = temp->next;
	last->next = *stack_a;
	temp->next = NULL;
	*stack_a = last;
	write(1,"rra\n",4);
}

void ra(t_list **stack_a)
{
	t_list *first;
	t_list *second;

	if(!*stack_a || !(*stack_a)->next)
		return;
	first = *stack_a;
	second = (*stack_a)->next;

	while((*stack_a)->next != NULL)
		*stack_a = (*stack_a)->next;

	(*stack_a)->next = first;
	first->next = NULL;
	*stack_a = second;
	write(1,"ra\n",3);
}
