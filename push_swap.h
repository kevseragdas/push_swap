#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

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
	

void	pa(t_list **stack_a, t_list **stack_b);
void 	pb(t_list **stack_a, t_list **stack_b);
void	sa(t_list **stack_a);
void	rra(t_list **stack_a);
void	ra(t_list **stack_a);
void    ft_exit(t_list **stack, char **new);
void	acnumctl(int ac, t_list **stack_a, t_list **stack_b);
void    radix_sort(t_list **stack_a, t_list **stack_b);
char 	**ft_free(char **new);
char	**ft_split(char const *s, char c);
long	ft_atoi(const char *nptr);
int 	main(int ac, char **arg);
int 	is_digit(char **s);
int 	is_repeat(t_list *stack);
int 	is_so_long(char *str);
int 	is_long(t_list *node, char **new, int j, t_list **stack);
int 	is_sorted(t_list *stack);
int 	stack_size(t_list *stack);
#endif
