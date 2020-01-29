/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eidaho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 14:00:43 by eidaho            #+#    #+#             */
/*   Updated: 2020/01/29 14:14:35 by eidaho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			count = argv[1][i] - 64;
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			count = argv[1][i] - 96;
		while (count)
	   {
	   		write (1, &argv[1][i], 1);
			count--;
	   }
		count = 1;
		i++;
	}
	write (1, "\n", 1);
	return (0);

}
