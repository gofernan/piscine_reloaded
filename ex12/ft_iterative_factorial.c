/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:50:19 by gofernan          #+#    #+#             */
/*   Updated: 2017/11/13 16:36:22 by gofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int sum;

	sum = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	else
	{
		while (nb > 1)
		{
			sum *= nb;
			nb--;
		}
		return (sum);
	}
}
