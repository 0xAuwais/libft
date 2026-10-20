/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:54:10 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/19 20:33:38 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char *f = (const unsigned char *)src;
	unsigned char *mdre = (unsigned char *)dest;
	if (dest == src)
		return (dest);
	size_t ff = n;
	while (ff--)
	{
		*mdre = *f;
		f++;
		mdre++;
	}
	return (dest);
}
