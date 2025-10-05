#include "push_swap.h"
#include <unistd.h>
#include <stdio.h>

t_list *rra(t_list *stack_a)
{
    t_list *temp;
    t_list *last;

    temp = stack_a;
    while(temp->next->next != NULL)
        temp = temp->next;

    last = temp->next;
    last->next = stack_a;
    temp->next = NULL;
    stack_a = last;

    return (stack_a);
}

t_list *rrb(t_list *stack_b)
{
    t_list *temp;
    t_list *last;

    temp = stack_b;
    while(temp->next->next != NULL)
        temp = temp->next;

    last = temp->next;
    last->next = stack_b;
    temp->next = NULL;
    stack_b = last;

    return (stack_b);
}

