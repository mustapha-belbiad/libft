/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelbiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:35:42 by mbelbiad          #+#    #+#             */
/*   Updated: 2021/11/11 22:43:51 by mbelbiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
void *ft_memset (void *b, int c, size_t len)
{
	char *str;

	str = (char*)b;
	while (len > 0)
	{
		*str = (char) c;
		len--;
		str++;
	}
	return (str);
}
