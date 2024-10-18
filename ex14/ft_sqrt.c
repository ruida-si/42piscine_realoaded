/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:20:55 by ruida-si          #+#    #+#             */
/*   Updated: 2024/10/15 12:21:00 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	while (result <= nb)
	{
		result = i * i;
		if (result == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{	
	printf("%i\n", ft_sqrt(25));
	
	printf("%i\n", ft_sqrt(23));	
}
*/
