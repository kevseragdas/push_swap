#include "push_swap.h"
#include <stdlib.h>

void ra(t_stack **a)
{
    t_stack *first;
    t_stack *last;

    if (!a || !*a || !(*a)->next)
        return;
    first = *a;
    *a = (*a)->next;
    first->next = NULL;
    last = *a;
    while (last->next)
        last = last->next;
    last->next = first;
}

void rb(t_stack **b)
{
    t_stack *first;
    t_stack *last;

    if (!b || !*b || !(*b)->next)
        return;
    first = *b;
    *b = (*b)->next;
    first->next = NULL;
    last = *b;
    while (last->next)
        last = last->next;
    last->next = first;
}

void rr(t_stack **a, t_stack **b)
{
    ra(a);
    rb(b);
}
