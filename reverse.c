#include "push_swap.h"
#include <unistd.h>
#include <stdio.h>

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

void    rrb(t_list **stack_b)
{
    t_list *temp;
    t_list *last;

    temp = *stack_b;
    while(temp->next->next != NULL)
        temp = temp->next;

    last = temp->next;
    last->next = *stack_b;
    temp->next = NULL;
    *stack_b = last;
    write(1,"rrb\n",4);
}
void rrr(t_list **stack_a, t_list **stack_b)
{
    t_list *last;
    t_list *second_last;
    
    if (*stack_a && (*stack_a)->next)
    {
        second_last = *stack_a;
        while (second_last->next->next)
            second_last = second_last->next;
        last = second_last->next;
        second_last->next = NULL;
        last->next = *stack_a;
        *stack_a = last;
    }
    if (*stack_b && (*stack_b)->next)
    {
        second_last = *stack_b;
        while (second_last->next->next)
            second_last = second_last->next;
        last = second_last->next;
        second_last->next = NULL;
        last->next = *stack_b;
        *stack_b = last;
    }
    write(1,"rrr\n",4);
}
