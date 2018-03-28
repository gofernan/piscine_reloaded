/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:06:58 by gofernan          #+#    #+#             */
/*   Updated: 2017/11/13 13:56:08 by gofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int i;

	i = 0;
	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	arr = (int*)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
