/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:22:18 by dpalacio          #+#    #+#             */
/*   Updated: 2021/11/04 13:35:15 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	len;

	i = 0;
	range = NULL;
	len = max - min;
	if (min >= max)
	{
		return (NULL);
	}
	range = (int *)malloc((len) * sizeof (int));
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
