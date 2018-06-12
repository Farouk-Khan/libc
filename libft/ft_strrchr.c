/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:23:54 by fkhan             #+#    #+#             */
/*   Updated: 2018/06/03 12:16:26 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*tab;

	tab = (char *)str + ft_strlen((char *)str);
	while (*tab != c)
	{
		if (tab == str)
			return (NULL);
		tab--;
	}
	return (tab);
}
