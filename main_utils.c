/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagdas <kagdas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:37:34 by kagdas            #+#    #+#             */
/*   Updated: 2025/10/28 16:40:12 by kagdas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		if (s[i][j] == '-' || s[i][j] == '+')
			j++;
		if (s[i][j] == '\0')
			return (0);
		while (s[i][j])
		{
			if (s[i][j] < '0' || s[i][j] > '9')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_repeat(t_list *stack)
{
	t_list	*second;

	second = stack->next;
	while (stack)
	{
		second = stack->next;
		while (second)
		{
			if (second->value == stack->value)
				return (0);
			else
				second = second->next;
		}
		stack = stack->next;
	}
	return (1);
}

int	is_so_long(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i > 10)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	is_long(t_list *node, char **new, int j, t_list **stack)
{
	long	num;
	int		i;

	i = 0;
	while (new[i])
	{
		if (!is_so_long(new[i]))
		{
			free(node);
			ft_exit(stack, new);
		}
		i++;
	}
	num = ft_atoi(new[j]);
	if (num > 2147483647 || num < -2147483648)
	{
		free(node);
		ft_exit(stack, new);
	}
	else
		node->value = num;
	return (node->value);
}

int	is_sorted(t_list *stack)
{
	while (stack->next)
	{
		if ((stack->value) < (stack->next->value))
			stack = stack->next;
		else
			return (1);
	}
	return (0);
}
