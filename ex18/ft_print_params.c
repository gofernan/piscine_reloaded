/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:58:35 by gofernan          #+#    #+#             */
/*   Updated: 2017/11/13 14:36:25 by gofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int a;
	int i;

	a = 1;
	while (a < argc)
	{
		i = 0;
		while (argv[a][i] != '\0')
		{
			ft_putchar(argv[a][i]);
			i++;
		}
		ft_putchar('\n');
		a++;
	}
	return (0);
}
