/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:36:09 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/21 12:36:09 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t size){
    
    size_t f = size;
    size_t ff = 0;
    while (*dst && f){
        dst++;
        ff++;
        f--;
    }
    if (f != 0)
    ft_strlcpy(dst, src, f);
    ff+=ft_strlen(src);
    return ff;
}