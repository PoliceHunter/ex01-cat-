/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:27:31 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/07/18 15:26:59 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft.h"

void	ft_display_file(int ac, char **av)
{
	char	str[2];
	int		fd;
	int		retour;

	fd = open(av[1], O_RDONLY);
	if (ac == 2)
	{
		if (fd != -1)
		{
			while ((retour = read(fd, str, 1)))
			{
				str[retour] = '\0';
				ft_putstr(str);
			}
		}
	}
	else if (ac == 1)
		ft_putstr("File name missing.\n");
	else
		ft_putstr("Too many arguments.\n");
}
