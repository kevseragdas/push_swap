#include "push_swap.h"
#include <unistd.h>

t_list *pa(t_list *stack_a, t_list *stack_b)
{
   t_list *first_a;
   t_list *first_b;
   t_list *temp;
   
   first_a = stack_a;
   first_b = stack_b;

   stack_b = stack_b->next;
   temp = first_a;

   first_b->next = temp;
   stack_a = first_b;

   return stack_a;
}

t_list *pa(t_list *stack_a, t_list *stack_b)
{
   t_list *first_a;
   t_list *first_b;
   t_list *temp;
   
   first_a = stack_a;
   first_b = stack_b;

   stack_a = stack_a->next;
   temp = first_b;

   first_a->next = temp;
   stack_b = first_a;

   return stack_b;
}