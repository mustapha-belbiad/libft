/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelbiad <mbelbiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:43:23 by mbelbiad          #+#    #+#             */
/*   Updated: 2021/11/12 21:34:08 by mbelbiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char *ft_strchr (const char *s, int c)
{
    while (s)
    {
        if (*s == (unsigned char )c)
            return ((char *)s);
        return (0);
    }
}

int main ()
{
    printf("%s\n", ft_strchr("hello .there", '.'));
    printf("%s", strchr("hello .there", '.'));
}
