/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsprigga <bsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 20:32:42 by bsprigga          #+#    #+#             */
/*   Updated: 2018/11/20 21:06:15 by bsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	if (nb < 0 || nb > 12)
		return (0);
	res = 1;
	while (nb)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
