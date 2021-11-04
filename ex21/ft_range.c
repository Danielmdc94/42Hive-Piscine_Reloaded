/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:22:18 by dpalacio          #+#    #+#             */
/*   Updated: 2021/11/04 11:07:56 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	len;

	i = min + 1;
	range = NULL;
	len = max - min;
	if (min <= max)
	{
		return (NULL);
	}
	range = (int *)malloc((1 + len) * sizeof (int));
	while (i < max)
	{
		ptr[i] = i;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
