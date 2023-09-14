/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mooujaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:54:15 by mooujaa           #+#    #+#             */
/*   Updated: 2023/09/14 17:54:19 by mooujaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while(a <= '7')
	{
		b = a + 1;
		while(b <= '8')
		{
			c = b + 1;
			while(c <= '9')
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				if (a != '7')
					write (1 ,", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb();
	return 0;
}
