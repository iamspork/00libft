/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 20:20:59 by kialvare          #+#    #+#             */
/*   Updated: 2016/09/28 13:32:20 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const char *str;

	str = (const char *)s;
	i = 0;
	while(i < n)
	{
		if(str[i] == (unsigned char)c)
			return((void*)&str[i]);
			i++;
	}
	return(0);
}

