#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

void print_stack(t_list *stack)
{
    while (stack != NULL)
    {
        printf("%d\n", stack->value);
        stack = stack->next;
    }
}
void add_back(t_list *node, t_list **stack_a)
{ 
    t_list *temp;

    temp = *stack_a;
    if(*stack_a == NULL)
    {
        (*stack_a) = node;
        node->next = NULL;
        return;
    }
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = node;
    node->next = NULL;

}
int is_digit(char **s)
{
    int j;
    int i;

    i = -1;
    while(s[++i])
	{
        j = -1;
        while(s[i][++j])
        {
            if(s[i][j] == '-')
            {
                j++;
                if(s[i][j] <= '9' && s[i][j] >= '0')
                    continue;
                else
                    return(0);
            }
            if(s[i][j] <= '9' && s[i][j] >= '0')
                continue;
            else
                return(0);
        }
	}
    return(1);
}
void free_stack(t_list **stack)
{
    t_list *tmp;

    while (*stack)
    {
        tmp = (*stack)->next;
        free(*stack);
        *stack = tmp;
    }
}
// int is_repeat(char **s)
// {
//     int j;
//     int i;
//     char *a;
//     i = -1;
//     while(s[++i])
//     {
//         j = -1;
//         while(s[i][++j])
//             a[j] = s[i][j];
//     }
//     while(s[++i])
// 	{
//         j = -1;
//         while(s[i][++j])
//         {
            
//         }
// 	}
//     return(1);
// }

int main(int ac, char **arg)
{
    t_list * stack_a = NULL;
    t_list * stack_b = NULL;
    t_list *node;
    int i = 0;
    int j;
    char **new;

    if(ac == 1)
        exit(1);
    while(arg[++i])
    {
        new = ft_split(arg[i], ' ');
        if(!is_digit(new))
        {
            free_stack(&stack_a); 
            exit(1);
        }
        j = -1;
        while(new[++j])
        {
            node = malloc(sizeof(t_list));
            node->value = ft_atoi(new[j]);
            add_back(node, &stack_a);
        }
    }
    radix_sort(&stack_a, &stack_b);
    printf("stack_b :\n");
    print_stack(stack_b);
    printf("stack_a :\n");
    print_stack(stack_a);

}
