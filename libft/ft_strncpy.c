/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 12:25:15 by fkhan             #+#    #+#             */
/*   Updated: 2018/05/18 12:44:16 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strncpy(char *s1, char *s2, unsigned int len)
{
	int i;

	i = 0;
	while (i <= 52)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}

int		main()
{
	char c[] = "hey there";
	char *a;

	printf("%s", ft_strncpy(a, c, 6));
	return (0);
}
