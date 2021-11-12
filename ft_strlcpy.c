/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelbiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:16:50 by mbelbiad          #+#    #+#             */
/*   Updated: 2021/11/10 20:17:46 by mbelbiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
size_t *ft_strlcpy (char *dst, const char *src size_t dstsize)
{
	size_t sz;
	size_t wq;

	sz = 0;
	wq = 0;
	while (src[wq])
		wq++;
	if (dstsize < 1 )
		return (wq);
	while (src[sz] && sz < dstsize - 1)
	{
		dest[sz] = sr[sz];
		sz++;
	}
	dest[i] = '\0';
	return (wq);
}
int main ()
{
	char dee [8] ;
	char see [] = "hello";
	printf("%s", ft_strncpy(dee, see));
}
