#include "push_swap.h"
#include <unistd.h>

t_list *sa(t_list * stack_a)
{
    t_list *first_a;

     if (!stack_a || !stack_a->next)
        return stack_a;

    first_a = stack_a;
    stack_a = stack_a->next;
    first_a->next = stack_a->next;
    stack_a->next = first_a;
    
    return stack_a;
}

t_list *sb(t_list * stack_b)
{
    t_list *first_b;

     if (!stack_b || !stack_b->next)
        return stack_b;

    first_b = stack_b;
    stack_b = stack_b->next;
    first_b->next = stack_b->next;
    stack_b->next = first_b;

    return stack_b;
}
