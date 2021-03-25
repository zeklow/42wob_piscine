/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeirith <mbeirith@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:09:51 by mbeirith          #+#    #+#             */
/*   Updated: 2021/03/25 21:25:49 by mbeirith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char az;

	az = 'a';
	while (az <= 'z')
	{
		ft_putchar(az);
		az++;
	}
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}