/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelbiad <mbelbiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:31:45 by mbelbiad          #+#    #+#             */
/*   Updated: 2021/11/08 15:16:57 by mbelbiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
 int ft_isalpha(int c)
 {  
     if ((c >= 101 && c <= 132) || (c >= 141 && c <= 172))
        return (1);
    else 
        return (0); 
 }
int main ()
{
	int a;
	a = '5';
	printf( "%d", ft_isalpha(a));
}	