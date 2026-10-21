/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 13:27:06 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/21 13:27:06 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char *f = s;
    size_t ff = ft_strlen(s);
    f += ff;
    while(ff--){
        if (*f == c )
            return f;
            f--;
    }
    if (*f == c)
        return f ;
    return NULL;
}
