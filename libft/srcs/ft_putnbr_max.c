/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 13:26:03 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/01 18:19:35 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_max(long int n)
{
	if (n > 9223372036854775807 || n < (-9223372036854775807) - 1)
		return ;
	if (n == (-9223372036854775807) - 1)
	{
		ft_putstr("-9223372036854775808");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_max(n / 10);
		ft_putnbr_max(n % 10);
	}
	else
		ft_putchar(n + 48);
}
