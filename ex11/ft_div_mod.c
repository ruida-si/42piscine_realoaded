/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:36:30 by ruida-si          #+#    #+#             */
/*   Updated: 2024/10/15 11:36:35 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main()
{
	int a = 10;
	int b = 3;
	int div = 2;
	int mod = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("%i, %i", div, mod);
}
*/
