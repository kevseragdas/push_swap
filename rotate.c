#include "push_swap.h"
#include <unistd.h>
#include <stdio.h>

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
    printf("ra\n");
}

void rb(t_list **stack_b)
{
    t_list *first;
    t_list *second;

    if(!*stack_b || !(*stack_b)->next)
        return;
    first = *stack_b;
    second = (*stack_b)->next;

    while((*stack_b)->next != NULL)
        *stack_b = (*stack_b)->next;

    (*stack_b)->next = first;
    first->next = NULL;
    *stack_b = second;
    printf("rb\n");
}
