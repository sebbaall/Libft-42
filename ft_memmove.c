/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabahmad <sabahmad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:47:15 by sabahmad          #+#    #+#             */
/*   Updated: 2026/09/16 14:37:00 by sabahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			((char *)dest)[i] = ((char *)src)[i];
		}
	}
	return (dest);
}
