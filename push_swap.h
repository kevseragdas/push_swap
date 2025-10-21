#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include "./ft_printf/ft_printf.h"
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
    

int     main(int ac, char **arg);
char	**ft_split(char const *s, char c);
t_list  *stack_end(t_list * stack_a);
t_list *new_node(int value);
long long	ft_atoi(const char *nptr);
size_t	ft_strlen(const char *s);
void    add_back(t_list *node, t_list **stack_a);
void    sb(t_list **stack_b);
void    sa(t_list **stack_a);
void    ss(t_list **stack_a, t_list **stack_b);
void    rrb(t_list **stack_b);
void    rra(t_list **stack_a);
void    rrr(t_list **stack_a, t_list **stack_b);
void    ra(t_list **stack_a);
void    rb(t_list **stack_b);
void    rr(t_list **stack_a, t_list **stack_b);
void    pa(t_list **stack_a, t_list **stack_b);
void    pb(t_list **stack_a, t_list **stack_b);
void    print_stack(t_list *stack);
int     is_digit(char **s);
void    free_stack(t_list **stack);
int     max_bitn(t_list *stack_a);
void    radix_sort(t_list **stack_a, t_list **stack_b);
int     stack_size(t_list *stack);
int     is_repeat(t_list *stack);
void    find_index(t_list **stack);
char    **ft_free(char **new);
int     is_sorted(t_list *stack);
void	acnumctl(int ac, t_list **stack_a, t_list **stack_b);
int	    find_min(t_list *stack);
void    two_arg(t_list **stack);
void	three_arg(t_list **a);
void    four_arg(t_list **a, t_list **b);
void	five_arg(t_list **a, t_list **b);
int     is_long(t_list *node, char **new, int j, t_list **stack);
void    ft_exit(t_list **stack, char **new);
#endif
