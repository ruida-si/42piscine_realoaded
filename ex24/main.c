/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:45:19 by ruida-si          #+#    #+#             */
/*   Updated: 2024/10/17 14:45:22 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"
#include <stdio.h>

int main()
{
	ft_putchar('N');
	ft_putchar('\n');
	char str[] = "RuiCampos\n";
	ft_putstr(str);
	char s1[] = "b";
	char s2[] = "a";
	printf("%i\n", ft_strcmp(s1, s2));
	printf("%i\n", ft_strlen(str));
	int a = 10;
	int b = 3;
	ft_swap(&a, &b);
	printf("%i, %i\n", a, b);
}
