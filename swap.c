#include "push_swap.h"

void sa(t_list *a)
{
    t_node *first;
    t_node *second;

    if(!a)
        return;
    
        first = a->head;
        second = first->next;
        
        first->next = second->next;
        second->next = first;
        a->head = second;
        
}