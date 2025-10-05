#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **arg)
{
    int chunk = 0;
    int group = 0;
    int i = 0;
    char **new;
    int *integer;
    t_list * node;
    t_list * stack_a = malloc(sizeof(t_list));

    while(arg[i++])
        new = ft_split(arg[i], ' ');
    i = 0;
    while (new[i])
    {}


    // if(ac < 5)
    //     chunk = 0;
    // else if (ac < 100)
    //     chunk = 5;
    // else if (ac < 250)
    //     chunk = 10;
    // else if (ac < 500)
    //     chunk = 25;

    // group = ac / chunk;
    
    // controller(ac, arg, stack_a, group);


}

char controller (int ac, char **arg, t_list * stack_a, int group)
{
    int i = 0;
    int j = 0;
    char     max;

    int len = ft_strlen(arg[1]);
    while (len - i < len)
    {
        i = 0;
        max = arg[1][j + 1];
        while(i < len)
        {
            if(arg[1][j] < arg[1][j + 1])
                max = arg[1][j + 1];
            i++;
            j++;
        }
        return (max);
    }


}
