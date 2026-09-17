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
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_str;
	const unsigned char	*src_str;
	unsigned char		*temp;
	size_t				i;

	temp = malloc(n);
	if (!temp)
		return (0);
	dest_str = (unsigned char *)dest;
	src_str = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = src_str[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest_str[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}
