/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eidaho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 10:22:28 by eidaho            #+#    #+#             */
/*   Updated: 2020/01/29 10:25:35 by eidaho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc < 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[argc - 1][i] != '\0')
	{
		write (1, &argv[argc - 1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}