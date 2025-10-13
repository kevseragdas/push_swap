#include "push_swap.h"
#include <unistd.h>

void    sa(t_list **stack_a)
{
    t_list *first_a;

     if (!*stack_a || !(*stack_a)->next)
        return;
    first_a = *stack_a;
    *stack_a = (*stack_a)->next;
    first_a->next = (*stack_a)->next;
    (*stack_a)->next = first_a;
}

void    sb(t_list **stack_b)
{
    t_list *first_b;

     if (!*stack_b || !(*stack_b)->next)
        return;
    first_b = *stack_b;
    *stack_b = (*stack_b)->next;
    first_b->next = (*stack_b)->next;
    (*stack_b)->next = first_b;
}