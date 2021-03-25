/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeirith <mbeirith@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:26:23 by mbeirith          #+#    #+#             */
/*   Updated: 2021/03/25 21:53:05 by mbeirith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int		main(void)
{
	int a;
	int b;
	
	a = 4;
	b = 2;

	printf("before swap a: %d\nbefore swap b: %d\n",a , b);
	ft_swap(&a,&b);
	printf("after swap a: %d\nafter swap b: %d\n",a, b);
	return (0);
}