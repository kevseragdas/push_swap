#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_node
    {
        int value;
        struct s_node *next;
    } t_node;

typedef struct s_list
    {
        int size;
        struct s_list *head;
    } t_list;

t_node *new_node(int value);
int main(int ac, char **arg);
int	ft_atoi(const char *nptr);
char	**ft_split(char const *s, char c);
void *add_front(t_list *stack, t_node *node);

#endif
