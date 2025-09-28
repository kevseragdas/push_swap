#include "push_swap.h"
#include <unistd.h>

t_list *pa(t_list *stack_a, t_list *stack_b)
{
   t_list *first_b;
   
   if(!stack_b)
      return stack_a;
  
   first_b = stack_b;
   stack_b = stack_b->next;

   first_b->next = stack_a;
   stack_a = first_b;

   return stack_a;
}

t_list *pb(t_list *stack_a, t_list *stack_b)
{
   t_list *first_a;
   
   if(!stack_a)
      return stack_b;
  
   first_a = stack_a;
   stack_a = stack_a->next;

   first_a->next = stack_b;
   stack_b = first_a;

   return stack_b;
}