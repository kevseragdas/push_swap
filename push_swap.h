#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>

typedef struct s_list
{
    int value;
    int index;
    struct s_list *next;
} t_list;

typedef struct s_push_swap
{
    t_list *stack_a;
    t_list *stack_b;
    int size_a;
    int size_b;
}t_push_swap;
    

int main(int ac, char **arg);
t_list  *stack_end(t_list * stack_a);
t_list *new_node(int value);
char	**ft_split(char const *s, char c);
size_t	ft_atoi(const char *nptr);
size_t	ft_strlen(const char *s);
void add_back(t_list *node, t_list **stack_a);
t_list *sa(t_list * stack_a);
t_list *sb(t_list * stack_b);
t_list *rra(t_list *stack_a);
t_list *rrb(t_list *stack_b);
t_list *ra(t_list *stack_a);
t_list *rb(t_list *stack_b);
t_list *pa(t_list *stack_a, t_list *stack_b);
t_list *pb(t_list *stack_a, t_list *stack_b);
void print_stack(t_list *stack);
int is_digit(char **s);
void free_stack(t_list **stack);
#endif
