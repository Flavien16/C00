/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcamoin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:32:31 by fcamoin           #+#    #+#             */
/*   Updated: 2023/07/09 11:22:59 by fcamoin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int	count;

	count = 48;
	while (count <= 57)
	{
		write(1, &count, 1);
		count++;
	}
}

/*int	main()
{
	ft_print_numbers();
	return (0);
}*/
