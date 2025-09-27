#include "push_swap.h"
#include <unistd.h>

t_list *sa(t_list * stack_a)
{
    t_list * first_a;
    t_list * second_a;

    if(!stack_a || stack_a->next == NULL)
        return stack_a;

    first_a = stack_a;
    second_a = first_a->next;

    first_a->next = second_a->next;
    first_a = second_a->next;

    return second_a;
}

t_list *sb(t_list * stack_b)
{
    t_list * first_b;
    t_list * second_b;

    if(!stack_b || stack_b->next == NULL)
        return stack_b;

    first_b = stack_b;
    second_b = first_b->next;

    first_b->next = second_b->next;
    first_b = second_b->next;

    return second_b;
}
