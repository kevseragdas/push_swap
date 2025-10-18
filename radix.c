#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int max_bitn(t_list *stack_a)
{
    int max = 0;
    int bit = 0;
    while(stack_a != NULL)
    {
        if((stack_a ->value) > max)
            max = stack_a ->value;
        stack_a = stack_a->next;
    }
    while(max != 0)
    {
        max = max >> 1;
        bit++;  
    }
    return(bit);
}

int stack_size(t_list *stack)
{
    int size = 0;
    while(stack != NULL)
    {
        stack = stack->next;
        size++;
    }
    return(size);
}

int is_negative(t_list *stack)
{
    int num;

    num = stack->value;
    if(num >= 0)
        return (1);
    else
        return (0);
}
void    radix_sort(t_list **stack_a, t_list **stack_b)
{
    int max_bit;
    int temp;
    int size;
    int i;
    int j;

    find_index(stack_a);
    max_bit = max_bitn(*stack_a);
    size = stack_size(*stack_a);
    i = -1;
    while(++i < max_bit)
    {
        j = -1;
        while(++j < size)
        {
            temp = (*stack_a)->index;
            if((temp >> i & 1) == 0)
                pb(stack_a, stack_b);
            else
                ra(stack_a);
        }
        while(*stack_b)
            pa(stack_a, stack_b);
    }   
}
void find_index(t_list **stack)
{
    t_list *tmp1;
    t_list *tmp2;
    int rank;

    tmp1 = *stack;
    while (tmp1)
    {
        rank = 0;
        tmp2 = *stack;
        while (tmp2)
        {
            if (tmp2->value < tmp1->value)
                rank++;
            tmp2 = tmp2->next;
        }
        tmp1->index = rank;
        tmp1 = tmp1->next;
    }
}
