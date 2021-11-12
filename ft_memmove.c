/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelbiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:44:05 by mbelbiad          #+#    #+#             */
/*   Updated: 2021/11/12 04:32:53 by mbelbiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
 #include <string.h>
void * my_memmove(void	*dst, const void *src, size_t n)
{
	unsigned char *ds;
	unsigned char *sr;
	
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	ds = (unsigned char *) dst;
	sr = (unsigned char *) src ;
	if (ds > sr || ds < sr)
	{
		while( n > 0)
		{
			ds[n] = sr [n];
			n--;
		}
	
	}
	return (dst);
}
int main ()
{
	char str[50] = "";
	printf("Function : \tmy_memmove with overlap\n");
	printf("original : \t%s\n",str);
	printf("source : \t\t%s\n",str + 5);
	printf("destination : \t%s\n", str + 11);
	my_memmove(str + 11, str + 5, 29 );
	printf("result : \t\t%s\n", str);
	return (0);
}
