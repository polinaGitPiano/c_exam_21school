/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eidaho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 09:53:24 by eidaho            #+#    #+#             */
/*   Updated: 2020/01/29 09:56:34 by eidaho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	int number;

	number = '9';
	while (number >= '0')
	{
		write (1, &number, 1);
		number--;
	}
	write (1, "\n", 1);
	return (0);
}
