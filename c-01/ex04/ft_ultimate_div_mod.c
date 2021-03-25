/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeirith <mbeirith@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:03:12 by mbeirith          #+#    #+#             */
/*   Updated: 2021/03/25 21:55:47 by mbeirith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;

	div = *a % *b;
	*a = *a / *b;
	*b = div;
}

int		main(void)
{
	int a = 8;
	int b = 4;
	
	
	
	ft_ultimate_div_mod(&a, &b);
	printf("Modulo: %d\nDiv: %d\n", a, b);
	
	return (0);
}