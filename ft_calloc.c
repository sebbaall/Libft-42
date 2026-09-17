/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabahmad <sabahmad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:51:17 by sabahmad          #+#    #+#             */
/*   Updated: 2026/09/10 19:00:25 by sabahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_collac(size_t n, size_t size)
{
	size_t			bytes;
	size_t			i;
	unsigned char	*ptr;

	bytes = n * size;
	ptr = malloc(bytes);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < bytes)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
