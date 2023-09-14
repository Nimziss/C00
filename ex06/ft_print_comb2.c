/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mooujaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:37:07 by mooujaa           #+#    #+#             */
/*   Updated: 2023/09/14 04:14:19 by mooujaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	int_to_char(int i)
{
	int	a;
	int	b;

	if (i < 10)
	{
		ft_putchar('0');
		ft_putchar(i + '0');
	}
	else
	{
		a = i / 10;
		b = i % 10;
		ft_putchar(a + '0');
		ft_putchar(b + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			int_to_char(i);
			ft_putchar(' ');
			int_to_char(j);
			if (i < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb2();
	return(0);
}
