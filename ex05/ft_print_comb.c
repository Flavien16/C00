/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcamoin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:33:03 by fcamoin           #+#    #+#             */
/*   Updated: 2023/07/09 11:26:58 by fcamoin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	while (num1 <= '9')
	{
		num2 = num1 + 1;
		while (num2 <= '9')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				write(1, &num1, 1);
				write(1, &num2, 1);
				write(1, &num3, 1);
				if (!(num1 == '7' && num2 == '8' && num3 == '9'))
					write(1, ", ", 2);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

/*int     main(void)
{
        ft_print_comb();
        return (0);
}*/
