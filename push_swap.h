#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
void add_back(t_list * stack_a, t_list * node);
t_list *new_node(int value);
char	**ft_split(char const *s, char c);

#endif
