#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

 int ft_is_number(char **s)
 {
    int i;
    int j;

    i = 0;
    while(s[i])
    {
        j = 0;
        while(s[i][j])
        {
            if (!(s[i][j] <= '9' && s[i][j] >= '0') || s[i][j] != ' ')
                return (0);
            j++;
        }
        i++;
    }
    return (1);
 }
 