/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slombard <slombard@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 22:55:26 by slombard          #+#    #+#             */
/*   Updated: 2023/05/09 18:47:18 by slombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_build_str_arr(int argc, char **argv, t_stack *stack_a)
{
	int		i;
	char	**ret;

	if (argc == 2)
	{
		ret = ft_split(argv[1], ' ');
		while (ret[(*stack_a).size])
			(*stack_a).size++;
	}
	else if (argc > 2)
	{
		i = 1;
		ret = malloc (sizeof(char *) * argc - 1);
		while (i < argc)
		{
			ret[i - 1] = ft_strdup(argv[i]);
			i++;
			(*stack_a).size++;
		}
	}
	else
		exit (0);
	return (ret);
}

int	ft_find_smallest(int *stack_a, int size)
{
	int	ret;
	int	i;

	i = 0;
	ret = stack_a[0];
	while (i < size)
	{
		if (stack_a[i] < ret)
			ret = stack_a[i];
		i++;
	}
	return (ret);
}

int	ft_find_highest(int *stack, int size)
{
	int	ret;
	int	i;

	i = 0;
	ret = stack[0];
	while (i < size)
	{
		if (stack[i] > ret)
			ret = stack[i];
		i++;
	}
	return (ret);
}

int	ft_find_idx_number(int *stack, int number)
{
	int	i;

	i = 0;
	while (number != stack[i])
		i++;
	return (i);
}

long int	ft_atol(const char *str)
{
	long int	nb;
	int			isneg;
	int			i;

	nb = 0;
	isneg = 1;
	i = 0;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * isneg);
}
