/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:47:48 by ruida-si          #+#    #+#             */
/*   Updated: 2024/10/16 12:47:51 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	range = max - min;
	array = malloc(sizeof(int) * range);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
	free(array);
}
/*
#include <stdio.h>

int main()
{
	int min = -2;
	int max = 9;
	int i = 0;
	while (ft_range(min, max)[i])
	{
		printf("%i", ft_range(min, max)[i]);
		i++;
	}	
}
*/
