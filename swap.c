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
    write(1,"sa\n",3);
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
    write(1,"sb\n",3);
}
void ss(t_list **stack_a, t_list **stack_b)
{
    if (*stack_a && (*stack_a)->next)
    {
        t_list *first_a = *stack_a;
        *stack_a = (*stack_a)->next;
        first_a->next = (*stack_a)->next;
        (*stack_a)->next = first_a;
    }
    if (*stack_b && (*stack_b)->next)
    {
        t_list *first_b = *stack_b;
        *stack_b = (*stack_b)->next;
        first_b->next = (*stack_b)->next;
        (*stack_b)->next = first_b;
    }
    write(1,"ss\n",3);
}