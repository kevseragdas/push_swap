#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **arg)
{
    if(ac <= 2)
        return (0);
    
   
    
}
t_node *new_node(int value)
    {
        t_node *node = malloc(sizeof(t_node));
        if(!node)
            return(NULL);
        node->value = value;
        node->next = NULL;
        return(node);
    }

void *add_front(t_list *stack, t_node *node)
{
    if(!stack || !node)
        return;
    node->next = stack->head;
    stack->head = node;
    stack->size++;
}