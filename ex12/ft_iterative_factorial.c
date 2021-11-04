/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 21:07:58 by dpalacio          #+#    #+#             */
/*   Updated: 2021/10/29 11:39:26 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 13 && nb >= 0)
	{
		while (nb > 1)
			factorial = factorial * (nb--);
		return (factorial);
	}
	else
		return (0);
}
