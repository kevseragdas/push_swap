#include "push_swap.h"
#include <unistd.h>
#include <stdio.h>

void  pa(t_list **stack_a, t_list **stack_b)
{
   t_list *first_b;
   
   if(!*stack_b)
      return;
  
   first_b = *stack_b;
   *stack_b = (*stack_b)->next;

   first_b->next = *stack_a;
   *stack_a = first_b;
   ft_printf("pa\n");
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
   ft_printf("pb\n");
}
