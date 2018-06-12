/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 08:17:42 by fkhan             #+#    #+#             */
/*   Updated: 2018/06/06 13:07:24 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*hold;
	int		a;

	i = 0;
	a = ft_strlen(str);
	if ((hold = (char*)malloc(sizeof(str) * a)))
	{
		while (str[i] != '\0')
		{
			hold[i] = str[i];
			i++;
		}
		hold[i] = '\0';
		return (hold);
	}
	else
		return (0);
}
