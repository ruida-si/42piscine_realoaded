/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:09:34 by ruida-si          #+#    #+#             */
/*   Updated: 2024/10/15 12:09:38 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb < 2)
		return (1);
	result = nb * ft_recursive_factorial(nb -1);
	return (result);
}
/*
#include <stdio.h>

int main()
{
	printf("%i\n", ft_recursive_factorial(11));
	printf("%i\n", ft_recursive_factorial(13));
	printf("%i", ft_recursive_factorial(14));
}
*/
