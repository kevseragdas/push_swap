#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

t_list *new_node(int value)
{
   t_list * node = malloc(sizeof(t_list));
   if(!node)
        return(NULL);
    node->value = value;
    node->next = NULL;
    return(node);
}
void add_back(t_list * stack_a, t_list * node)
{   
    
}
t_list  *stack_end(t_list * stack_a)
{
    while(stack_a->next != NULL)
        stack_a = stack_a->next;
    return(stack_a);
}
int main(int ac, char **arg)
{
    int i = 0;
    t_list * node;
    t_list * stack_a = malloc(sizeof(t_list));
    while(arg[1][i])
    {
       int c = ft_atoi(arg[1][i]);
       node = new_node(c);
       add_back(&stack_a,node);
    }


}
