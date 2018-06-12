/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 09:28:11 by fkhan             #+#    #+#             */
/*   Updated: 2018/06/03 11:20:40 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char *ptr;

	ptr = (char *)malloc(size);
	if (!(ptr = (char *)malloc(size)))
		return (0);
	ft_memset(ptr, 0, size);
	return (ptr);
}
