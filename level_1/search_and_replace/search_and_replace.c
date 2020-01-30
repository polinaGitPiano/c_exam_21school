/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eidaho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 14:15:31 by eidaho            #+#    #+#             */
/*   Updated: 2020/01/30 10:47:32 by eidaho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 4)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
		{
			if (argv[1][i] == argv[2][0])
				write (1, &argv[3][0], 1);
			else
				write (1, &argv[1][i], 1);
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
