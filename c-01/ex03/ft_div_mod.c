/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeirith <mbeirith@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:32:01 by mbeirith          #+#    #+#             */
/*   Updated: 2021/03/25 21:54:28 by mbeirith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;
	
	a = 9;
	b = 2;
	
	ft_div_mod(a, b, &div, &mod);
	printf("Div: %d\nMod: %d\n", div, mod);
	return (0);	
}