/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelbiad <mbelbiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:58:05 by mbelbiad          #+#    #+#             */
/*   Updated: 2021/11/10 14:44:31 by mbelbiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi ( const char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 1;
	k = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = j * -1;
		i++
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		k = k * 10 + str[i] - '0';
		i++;
	}
	return (k * j);
}