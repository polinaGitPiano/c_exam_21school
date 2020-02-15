/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eidaho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 11:35:15 by eidaho            #+#    #+#             */
/*   Updated: 2020/02/15 11:39:10 by eidaho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *s, int i)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}

char	*strpbrk(const char *s, const char *charset)
{
	while (*s)
	{
		if (ft_strchr(charset, *s))
			return (char *)s;
		s1++;
	}
	return (NULL);
}
