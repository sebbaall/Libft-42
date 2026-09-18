/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabahmad <sabahmad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 11:47:35 by sabahmad          #+#    #+#             */
/*   Updated: 2026/09/16 17:06:06 by sabahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	char	*new;
	size_t	i;
	size_t	j;

	total = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(total + 1);
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		new[i] = s1[i];
		i++;
	}
	while (i < total)
	{
		new[i] = s2[j++];
		i++;
	}
	new[i] = '\0';
	return (new);
}
