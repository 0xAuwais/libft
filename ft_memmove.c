/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:43:11 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/20 13:43:11 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n){
    unsigned char * temp =(unsigned char *)dest;
    unsigned char *tmp = (unsigned char*)src;
    size_t f = n;
    if (temp > tmp){
        size_t i = f-1;
        while(f--){
            temp[i]=tmp[i];
            i--;
        }
    }else 
    ft_memcpy(dest, src, n);
    return dest;
}
