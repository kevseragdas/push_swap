#include "push_swap.h"
#include <stdlib.h>

void rra(t_stack **a)
{
    t_stack *prev;
    t_stack *last;

    if (!a || !*a || !(*a)->next)
        return;
    prev = NULL;
    last = *a;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    prev->next = NULL;
    last->next = *a;
    *a = last;
}

void rrb(t_stack **b)
{
    t_stack *prev;
    t_stack *last;

    if (!b || !*b || !(*b)->next)
        return;
    prev = NULL;
    last = *b;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    prev->next = NULL;
    last->next = *b;
    *b = last;
}

void rrr(t_stack **a, t_stack **b)
{
    rra(a);
    rrb(b);
}
