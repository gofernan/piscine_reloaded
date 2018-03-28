/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:09:17 by gofernan          #+#    #+#             */
/*   Updated: 2017/11/13 16:36:49 by gofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb == 1) || (nb == 0))
		return (1);
	else if (nb > 12)
		return (0);
	else
	{
		while (nb > 0)
		{
			return (nb * ft_recursive_factorial(nb - 1));
		}
	}
	return (0);
}
