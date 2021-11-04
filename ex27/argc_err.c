/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc_err.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:07:09 by dpalacio          #+#    #+#             */
/*   Updated: 2021/11/03 14:53:05 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(int fd, char *str);

void	argc_err(int argc)
{
	char	*n_miss;
	char	*many_arg;

	n_miss = "File name missing.\n";
	many_arg = "Too many arguments.\n";
	if (argc < 2)
		ft_putstr(2, n_miss);
	if (argc > 2)
		ft_putstr(2, many_arg);
}
