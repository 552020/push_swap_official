/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slombard <slombard@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 20:40:53 by slombard          #+#    #+#             */
/*   Updated: 2023/02/12 20:40:55 by slombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_ptr(void *ptr, int *count)
{
	ft_putstr("0x", count);
	ft_puthex((unsigned long)ptr, count, 'x');
}
