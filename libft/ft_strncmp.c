/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:40:36 by fkhan             #+#    #+#             */
/*   Updated: 2018/06/06 13:17:51 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	int				i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	if (len == 0)
		return (0);
	while ((i < len - 1) && ptr1[i] == ptr2[i]\
			&& ptr1[i] != '\0' && ptr2[i] != '\0')
	{
		i++;
	}
	return (ptr1[i] - ptr2[i]);
}
