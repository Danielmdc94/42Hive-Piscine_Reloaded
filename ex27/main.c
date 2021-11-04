/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:09:45 by dpalacio          #+#    #+#             */
/*   Updated: 2021/11/03 14:52:47 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	argc_err(int argc);
void	ft_putstr(int fd, char*str);

int	main(int argc, char **argv)
{
	int		fdes;
	char	buf;

	if (argc != 2)
		argc_err(argc);
	else if (argc == 2)
	{
		fdes = open(argv[1], O_RDONLY);
		if (fdes == -1)
			ft_putstr(2, "Open() Error.\n");
		else
			while (read(fdes, &buf, 1))
				write(1, &buf, 1);
		close(fdes);
	}
}
