#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

void print_stack(t_stack *stack, char name)
{
    printf("Stack %c: ", name);
    while (stack)
    {
        printf("%d ", stack->value);
        stack = stack->next;
    }
    printf("\n");
}

// Basit node oluşturma
t_stack *stack_new(int value)
{
    t_stack *node = malloc(sizeof(t_stack));
    node->value = value;
    node->next = NULL;
    return node;
}

int main(void)
{
    t_stack *a = stack_new(1);
    a->next = stack_new(2);
    a->next->next = stack_new(3);
    t_stack *b = NULL;

    print_stack(a, 'A');
    pb(&a, &b);
    print_stack(a, 'A');
    print_stack(b, 'B');
    ra(&a);
    print_stack(a, 'A');
    rra(&a);
    print_stack(a, 'A');
}
