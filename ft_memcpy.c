/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelbiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:20:51 by mbelbiad          #+#    #+#             */
/*   Updated: 2021/11/12 02:18:24 by mbelbiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
void	*ft_memcpy (void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char *pd;
	unsigned char *qw;

	if (dst == src)
		return (dst);
	i = 0;
	pd = (unsigned char *) dst;
	qw = (unsigned char *) src;
	while (n > 0)
	{
		pd[i] = qw[i];
		i++;
		n--;
	}
	return (dst);
}
int main ()
{
	char go [2] = "he";
	char oo [4] = "lo";
	ft_memcpy(oo, go, 4);
	printf("%s", oo);

}
