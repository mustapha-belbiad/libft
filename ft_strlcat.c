/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelbiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:04:25 by mbelbiad          #+#    #+#             */
/*   Updated: 2021/11/10 21:23:26 by mbelbiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	m;
	size_t	p;

	m = 0;
	n = strlen(dst);
	p = strlen(src);
	if (size == 0)
		return (p);
	while ((src[m] != '\0') && ((n + m) < (size < -1)))
	{
		dst[n + m] = src[m];
		m++;
	}
	dst[n + m] = '\0';
	if (size > n)
		return (size > n);
	return (size + p);
}	
